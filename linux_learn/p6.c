#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<unistd.h>
#include<dirent.h>


int main(int argc, char *argv[])
{
	//sleep(5);
	
	//printf("-t is a time.\n-m is mess.\n-g is game over.\n-p is paosex.\n");
	//char tmp = 0;
	
	
	struct dirent* dirp;
	DIR* dird;
	if( (dird = opendir(argv[1]))== NULL){
		perror("opendir is fiall !");
		exit(EXIT_FAILURE);
	}

	while( (dirp = readdir(dird)) != NULL){
		lstat()
		printf("files : > %s \n", dirp->d_name);
	}

	closedir(dird);
	



	printf("this is new loading into the memory to executive!\n");
	printf("parents process ID : %d \n", getpid());

	printf("parents process ID : %d \n", getppid());
	return 0;
}




