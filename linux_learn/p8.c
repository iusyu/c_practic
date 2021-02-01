#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.h>



int main(int argc, char *argv[])
{
	//sleep(5);
	
	//printf("-t is a time.\n-m is mess.\n-g is game over.\n-p is paosex.\n");
	//char tmp = 0;
/*	
	
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
	
*/
	
	char* path = "Forage";
	printf("%s\n",path);
	
	printf("%d \n", argc);

	return 0;
}




