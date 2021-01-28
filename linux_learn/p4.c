/**
 * 写一个程序 目的就是支持ls命令的shell
 *
 */



#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<unistd.h>
#include<getopt.h>
#include<dirent.h>


#define PWDBUFSIZE 1024

#define PRINT_CURRENT_DIR(string) printf("%s]>",string)


int com_ls(const char* argv);
void _ls_null(struct dirent* pwd);



enum {ls, cd};

int com_ls(const char* argv){
	/*
	char currentDir[PWDBUFSIZE];
	if( !getcwd(currentDir, PWDBUFSIZE)){
		perror("Get Current Dir Fial \n");
		exit(EXIT_FAILURE);
	}
*/
	printf("current dir > %s \n", argv);
	//PRINT_CURRENT_DIR(currentDir);
	
	DIR* pwd;
	struct dirent * ptr;
	if( (pwd=opendir(argv))==NULL){
		perror("opendir");
		return -1;
	}

	while( (ptr=readdir(pwd)) != NULL){
		_ls_null(ptr);	
	}

	closedir(pwd);

}


void _ls_null(struct dirent* pwd){
	printf("%s ", pwd->d_name);
}

void _ls_l(struct dirent * pwd){
	//printf("%s %s %s",pwd->d_name,
}

int format_print_file_list(struct dirent* file, char* opt[]){
	return 0;
}

int main(int argc, char *argv[])
{
	char buffer[PWDBUFSIZE];

	if(!getcwd( buffer, PWDBUFSIZE))
		exit(EXIT_FAILURE);


		
	printf("%s]> ", buffer);
	char tmp = 0;
	char commond[PWDBUFSIZE];

	size_t inc = 0;

	printf("this is new loading into the memory to executive!\n");
	printf("parents process ID : %d \n", getpid());

	printf("parents process ID : %d \n", getppid());
	return 0;
}


