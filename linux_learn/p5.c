#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<unistd.h>


int main(int argc, char *argv[])
{
	//sleep(5);
	
	printf("-t is a time.\n-m is mess.\n-g is game over.\n-p is paosex.\n");
	char tmp = 0;

	int opt;
	while( (opt = getopt(argc, argv, "t:m:")) != -1){
		switch (opt) {
			case 't':
				printf("You just get a timer %s \n", optarg);
				break;
			case 'm':
				printf("you just give up ttt %s \n", optarg);
				break;
			default:
				printf(" -t is a time.\n -m is mess.\n-g is game over.\n-p is paosex.\n");
		}
	}


	printf("this is new loading into the memory to executive!\n");
	printf("parents process ID : %d \n", getpid());

	printf("parents process ID : %d \n", getppid());
	return 0;
}




