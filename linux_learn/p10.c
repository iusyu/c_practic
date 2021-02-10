#include<stdio.h>
#include<stdlib.h>


#include<sys/types.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.h>
#include<sys/sysinfo.h>

#define MAX 100000000

extern char** environ;


int main(int argc, char *argv[])
{
	clearenv();
	for( int i =1; argv[i] != NULL; ++i){
		if( putenv(argv[i]) != 0)
			perror("cant't add env");
	}
	
	if( setenv("SAY","hello",0) == -1)
		perror("erro");
	char** ep;
	unsetenv("XDS");
	for(ep = environ; *ep != NULL; ep++){
		puts(*ep);
	}
	puts(getenv("USER"));

	return 0;
}




