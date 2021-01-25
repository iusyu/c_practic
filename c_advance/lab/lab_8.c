
#include<stdio.h>
#include<stdlib.h>


#include"toto.h"

typedef int (*pter)(void*);


int main(void) {
        
	toto_init(NULL);
	pter fpp = toto_init;

	fpp(NULL);

        double *p = (double*)calloc(10,sizeof(double));
        
        for (size_t i = 0; i < 10; i++) {
                p[i] = i;
        }

        eamall(10, p);

        printf("%f \n", p[0]);

        free(p);


	return 1;

}





