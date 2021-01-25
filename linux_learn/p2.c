#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<unistd.h>


int main(int argc, char *argv[], char** en)
{
	pid_t pt = fork();
	if( pt == 0){
		printf("this is child process\n");
		printf("this is child process, parents ID : %d\n", getpid());
		execve("p3",argv, en);
		printf("this is child process\n");

		exit(EXIT_SUCCESS);
	}else {
		sleep(1);
		printf("this parents process \n");
		printf("this parents process parents ID : %d \n", getpid());
		printf("has child process id: %u \n", pt);
		exit(EXIT_SUCCESS);
	}

	return 0;
}




