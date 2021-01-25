#include<stdio.h>
#include<stdlib.h>















int main(int argc, char *argv[])
{
	for (size_t i = 0; i < argc; i++){
		printf("number %d parameter:  %s \n", i , argv[i]);
	}
	return 0;
}
