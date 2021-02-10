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




#define MAX 100000000

extern char** environ;



int main(int argc, char *argv[])
{
	time_t tm = time(NULL);
	printf("%ul\n", tm);
	puts(ctime(&tm));
	return 0;
}




