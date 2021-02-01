/**
 * 这个文件自己实现ls命令
 * >ls -a
 * >ls -l
 * >ls -al
 * >ls
 * 这几个功能
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#include<sys/types.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.h>
#include<pwd.h>
#include<grp.h>


#define MAXBUFFSIZE 256
#define ST_A 001
#define ST_L 002
#define ST_AL 003



#define PRINT printf("-")
#define PRINTX printf("x")
#define PRINTR printf("r")
#define PRINTW printf("w")
#define ENDL printf("\n")

void throw_erro(char* ee){
	perror(ee);
	exit(EXIT_FAILURE);
}

void display_detail(struct stat * st, char* file_name){
	


	/* 显示文件类型 */
	if(S_ISLNK(st->st_mode)){
		printf("l");
	} else if (S_ISREG(st->st_mode)){
		printf("-");
	} else if (S_ISDIR(st->st_mode)){
		printf("d");
	} else if (S_ISCHR(st->st_mode)){
		printf("c");
	} else if (S_ISBLK(st->st_mode)){
		printf("b");
	} else if (S_ISFIFO(st->st_mode)){
		printf("f");
	} else if (S_ISSOCK(st->st_mode)){
		printf("s");
	}

	/* 打印文件所有者权限 */

	if( st->st_mode & S_IRUSR){
		printf("r");
	} else {
		printf("-");
	}

	if(st->st_mode & S_IWGRP) {
		printf("w");
	} else {
		printf("-");
	}

	if(st->st_mode & S_IXUSR) {
		printf("x");
	} else {
		printf("-");
	}
	
	/* 打印文件同组成员的访问权限 */

	if(st->st_mode & S_IRGRP){
		printf("r");
	} else {
		printf("-");
	}

	if( st->st_mode & S_IWGRP){
		printf("w");
	} else {
		PRINT;
	}

	if(st->st_mode & S_IXGRP){
		printf("x");
	} else {
		PRINT;
	}
	
	// 其他用户的访问权限
	if(st->st_mode & S_IROTH){
		PRINTR;
	} else {
		PRINT;
	}

	if(st->st_mode & S_IWOTH){
		PRINTW;
	} else {
		PRINT;
	}

	if( st->st_mode & S_IXOTH){
		PRINTX;
	} else {
		PRINT;
	}
	
	char buf_tm[MAXBUFFSIZE];
	struct passwd * psd;
	struct group *grp;
	
	psd = getpwuid(st->st_uid);
	grp = getgrgid(st->st_gid);

	printf("%4lu ", st->st_nlink);
	printf("%-8s", psd->pw_name);
	printf("%-8s", grp->gr_name);
	printf("%6luB", st->st_size);
	strcpy(buf_tm, ctime(& st->st_mtime));
	buf_tm[strlen(buf_tm) -1] = '\0';
	printf("  %s", buf_tm);
	printf(" %s", file_name); 
	ENDL;
}

void display_sample(struct stat *info){
	//printf("%5s",dire->d_name);
	
}

void display_samplee(struct dirent *info, char *name){

}

int is_cmd(char* cmd){
	int stat = 0;
	int cmd_stat_a = 0;
	int cmd_stat_l = 0;
	
	if(cmd[0] == '-'){
		stat = 1;
	} else {
		return stat;
	}

	for( size_t i=1; cmd[i] != EOF; i++){
		if (cmd[i] == 'a'){
			cmd_stat_a = 1;
		} else if (cmd[i] == 'l') {
			cmd_stat_l = 1;
		}
	}
	
	if(1 == stat ){
		if( cmd_stat_a == 1 && cmd_stat_l == 1)
			return ST_AL;
		else if ( 1 == cmd_stat_a && 0 == cmd_stat_l)
			return ST_A;
		else if ( 1 == cmd_stat_l && 0 == cmd_stat_a)
			return ST_L;
	} else {
		return stat;
	}

	return stat;
}


int parse_cmd(int argc, char* agrv[]){
	int cmd_stat = 0;
	if( (cmd_stat = is_cmd(agrv[1])) >= 1 ){
		return cmd_stat;
	} else {
		return cmd_stat;
	}
}



void whrap_display_opt(int mode, struct stat *info, char* name){
	switch(mode){
		case ST_A:
			display_sample(info);
			break;
		case ST_L:
			display_detail(info,name);
			break;
		case ST_AL:
			display_detail(info, name);
			break;
		default:
			display_sample(info);
			break;
			
	}
} 

char* combine_str(const char* a, const char* b){
	char* result;
	result = calloc(strlen(a) + strlen(b) + 1, 1);
	if(!result){
		throw_erro("alloc a string mem fail");
	}
	
	memcpy(result, a, strlen(a));
	memcpy(& result[strlen(a)] , b, strlen(b)+1);
	
	return result;
}

void display(int cmd_stat, char *path){
	if( !path){
		throw_erro("path is empty, can't open.");	
	}

	struct stat dirr;
	int ero;
	if( (ero = lstat(path,&dirr) ) == -1 ){
		throw_erro("lstat fail, have not file??");
	}

	whrap_display_opt(cmd_stat,&dirr,NULL);
	

}


char* get_cpystr(const char *const src){
	size_t chara = strlen(src)+1;

	char *tmp = calloc(chara, 1);
	strcpy(tmp,src);
	return tmp;
}






int main(int argc, char *argv[])
{


	int cmd_stat = 0;
	char* path = NULL;
	int path_pos = 0;

	char *pathname[MAXBUFFSIZE] ={NULL};
	
	//DIR *ddir;
	//struct stat buff;
	//struct dirent *ddient;


	if(1==argc){
		path = "./";
		
	}else if(argc > 1) {
		cmd_stat = is_cmd(argv[1]);
	}

	
	

	if( 0 == cmd_stat && argc > 1 )
		path_pos = 1;

	if( cmd_stat > 0 && argc >2)
		path_pos = 2;
	
	/* 生成读取路径 */
	if( 0==path_pos){
		pathname[0] = "./";
	}else if( path_pos > 0 && cmd_stat ==0){
		int i = 0;
		while( argv[path_pos] != NULL) {
			pathname[i] = argv[path_pos++];
		}
	} else if (path_pos >0 && cmd_stat > 0) {
		int i = 0;
		while( argv[path_pos] != NULL) {
			pathname[i] = argv[path_pos++];
		}
	}



	/* 读取目录pathname下的目录中的文件数量 */
	size_t counting = 0;
	size_t max_char = 0;
	size_t each_path = 0;
	for ( size_t i = 0; pathname[i] != NULL; i++) {
		DIR *ddir;
		struct stat buff;
		struct dirent *ddient;

		if( (ddir = opendir(pathname[i])) != NULL) {
			throw_erro("open filepath fail");
		}

		while ( (ddient = readdir(ddir)) != NULL ){
			
			
			counting++;
			if( strlen(ddient->d_name)+1 > max_char ){
				max_char = strlen(ddient->d_name)+1;
			}
		}

		closedir(ddir);
	}

	/* 分配多个目录下文件所需的空间 */
	char **filename = calloc( counting+1, sizeof(char*));
	
	
	/* 整理所要显示文件名字即路径 */
	size_t inc = 0;
	for ( size_t i = 0; pathname[i] != NULL; i++) {
		DIR *ddir;
		struct stat buff;
		struct dirent *ddient;

		if( (ddir = opendir(pathname[i])) != NULL) {
			throw_erro("open filepath fail");
		}

		while ( (ddient = readdir(ddir)) != NULL ){
			filename[inc] = get_cpystr(pathname[i]);
			strcat(filename[inc], ddient->d_name);
			inc++;
		}

		closedir(ddir);
	}

	for( size_t i = 0; filename[i] != NULL;i++) {
		display(cmd_stat, filename[i++]);
	}

	return 0;
}




