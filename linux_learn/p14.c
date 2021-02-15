/**
 * 测试time.h  一些函数
 * 
 *
 *
 *
 *
 *
 * */ 



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#include<sys/socket.h>
#include<netinet/in.h>

#include<fcntl.h>



#define MAX 100000000

extern char** environ;



int main(int argc, char *argv[])
{
	int sfd;
	if( (sfd = socket(AF_INET, SOCK_STREAM,0)) == -1) {
		perror("socket create");
		exit(EXIT_FAILURE);
	}

	struct sockaddr_in addrin;
	if(bind(sfd, &addrin, sizeof(struct sockaddr_in))) {
		perror("bind");
	}


	return 0;
}

