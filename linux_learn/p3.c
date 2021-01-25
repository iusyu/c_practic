#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
	sleep(5);
	printf("this is new loading into the memory to executive!\n");
	printf("parents process ID : %d \n", getpid());

	printf("parents process ID : %d \n", getppid());
	return 0;
}




