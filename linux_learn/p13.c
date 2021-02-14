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

#include<fcntl.h>



#define MAX 100000000

extern char** environ;



int main(int argc, char *argv[])
{
	char  buffer[1024];
	setvbuf(stdout,NULL, _IONBF,0);
	setvbuf(stdin, buffer, _IOFBF, 1024);
	char instr[2048];
	scanf("%s",instr);
}
