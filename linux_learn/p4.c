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




enum {ls, cd};

int main(int argc, char *argv[])
{
	char buffer[PWDBUFSIZE];

	if(!getcwd( buffer, PWDBUFSIZE))
		exit(EXIT_FAILURE);


	
	printf("%s]> ", buffer);
	char tmp = 0;
	char commond[PWDBUFSIZE];

	size_t inc = 0;
	while( (tmp = getchar) != EOF){
		int comm = figure_which_terminal(commond);
		switch (comm) {
			case ls:
				
				break;
			default:
				
		}
	}
	printf("this is new loading into the memory to executive!\n");
	printf("parents process ID : %d \n", getpid());

	printf("parents process ID : %d \n", getppid());
	return 0;
}


int com_ls(const char* argv){
	char currentDir[PWDBUFSIZE];
	if( !getcwd(currentDir, PWDBUFSIZE)){
		perror("Get Current Dir Fial \n");
		exit(EXIT_FAILURE);
	}

	printf("current dir > %s \n",currentDir);
	//PRINT_CURRENT_DIR(currentDir);
	
	DIR* pwd;
	struct dirent * ptr;
	if( (pwd=opendir(argv))==NULL){
		perror("opendir");
		return -1;
	}

	while( (ptr=readdir(pwd)) != NULL){
		
	}
}

int format_print_file_list(struct dirent* file, char* opt[]){

}


