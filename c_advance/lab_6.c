
#include<stdio.h>
#include<stdlib.h>


#include"toto.h"

typedef int (*pter)(void*);


int main(void) {
	toto_init(NULL);


        double dd = 8.231241242312;
        int id = camall(&dd);

        printf("%d %.6f \n", id, dd);

	pter fpp = toto_init;
	fpp(NULL);

        double dval[7] = {.2312412, .341343, .34135354,
                          .98978, .23344, 5.4524, .98};
        double eval[10] = {.1, .2, .4, .5, .6, .7, .9, .12, .3};
        double fval[10] = {.1, .2, .4, .5, .6, .7, .9, .12, .3};

        damall(dval);
        eamall(10,fval);

        printf( "%6.9f \n", dval[0]);
        printf( "%6.9f \n", fval[0]);


	return 1;

}





