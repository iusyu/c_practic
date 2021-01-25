#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
	pid_t pt = fork();
	if( pt == 0){
		printf("this is child process\n");
		exit(EXIT_SUCCESS);
	}else {
		sleep(1);
		printf("this parents process \n");
		printf("has child process id: %u \n", pt);
		exit(EXIT_SUCCESS);
	}

	return 0;
}




