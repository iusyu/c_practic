/**
 * 测试malloc中 sbrk和brk两个系统调用的作用
 *
 *
 *
 *
 *
 * */ 



#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#define MAX 100000000

extern char** environ;



int main(int argc, char *argv[])
{
	if( strcmp(argv[1],"-help") == 0){
		puts("num-alloc size-alloc [free-cycle-step] [asigned-to-free-start] [end]");
	}
	
	return 0;
}




