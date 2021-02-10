/**
 * 测试程序内存布局
 *
 *
 */


#include<stdio.h>
#include<stdlib.h>



#define MAX 100000000

extern char** environ;

char uninitBuff[10240000] = {1};


int main(int argc, char *argv[])
{
	static char sta_unitia[1024];
	static char sta_init[1024] = {0};

	return 0;
}




