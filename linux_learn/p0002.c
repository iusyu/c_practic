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
#include <signal.h>




#define MAX 100000000

extern char** environ;

static unsigned stop = 0;

static void handle_term(int sig)
{
	printf("this is a SIGINT.\n");
}


int main(int argc, char *argv[])
{
	void (*old_handler)(int) = signal(SIGQUIT, handle_term);
	assert(old_handler != SIG_ERR);
	while ( !stop) {
		printf("----\n");
		sleep(1);
	}


	return 0;
}




