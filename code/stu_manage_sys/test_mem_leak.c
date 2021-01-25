#include<stdio.h>
#include<stdlib.h>

void fc(){
	int *p = (int*)calloc(10, sizeof(int));
	p[10] = 0;
}

int main(int argc, char *argv[])
{
	fc();
	return 0;
}
