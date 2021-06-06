/*
 *
 * test socket address
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <assert.h>




#define MAX 100000000

extern char** environ;

static unsigned stop = 0;

static void handle_term(int sig)
{
	stop = 1;
}


int main(int argc, char *argv[])
{

	struct sockaddr_in nadd;
	bzero(&nadd, sizeof(struct sockaddr_in));
	nadd.sin_family = AF_INET;
	nadd.sin_port = htons( atoi( argv[2]));
	inet_aton(argv[1], &nadd.sin_addr);
	printf("%x ",10);

	int sfd = socket( PF_INET, SOCK_STREAM, 0);
	if( sfd == -1) {
		perror("socket creat fault");
		exit(EXIT_FAILURE);
	}

	int bret = bind(sfd, (const struct sockaddr*)&nadd, sizeof(nadd));
	assert( bret != -1);

	int lret = listen(sfd, 10);
	assert( lret != -1);

	while ( ! stop ) {
		sleep(1);
	}

	close(sfd);


	return 0;
}




