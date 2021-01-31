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


#define MAXBUFFSIZE 128

#define PRINT printf("-")
#define PRINTX printf("x")
#define PRINTR printf("r")
#define PRINTW printf("w")
#define ENDL printf("\n")
#define PRINTSING(c) printf("c")

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

	printf("%4u ", st->st_nlink);
	printf("%-8s", psd->pw_name);
	printf("%-8s", grp->gr_name);
	printf("%6uB", st->st_size);
	strcpy(buf_tm, ctime(& st->st_mtime));
	buf_tm[strlen(buf_tm) -1] = '\0';
	printf("  %s", buf_tm);
	printf(" %s", file_name); 
}

void display_sample(




int main(int argc, char *argv[])
{
	
	
	struct dirent* dirp;
	DIR* dird;
	if( (dird = opendir(argv[1]))== NULL){
		perror("opendir is fiall !");
		exit(EXIT_FAILURE);
	}

	while( (dirp = readdir(dird)) != NULL){
		
		printf("files : > %s \n", dirp->d_name);
	}

	closedir(dird);
	

	char * path = "./p4.c";
	char buuff[64];
	struct stat filed;
	int st = lstat(path, &filed);
	
	display_detail(&filed,"./p2.c");
	ENDL;


	return 0;
}




