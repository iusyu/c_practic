
#include<stdio.h>
#include<stdlib.h>


#include"toto.h"

typedef int (*pter)(void*);


int main(void) {
        
	toto_init(NULL);
	pter fpp = toto_init;
	fpp(NULL);
	return 1;

}





