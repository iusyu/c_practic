/*
 *
 *
 *
 * inline function declaration in this files
 *
 *
 *
 *
 *
 */






#include"toto.h"


int toto_init ( void* );



/* IMPLEMENT */

int camall(double pard[1]){
        return (int)(*pard);
}


int damall(double pard[7]) {
        for (size_t i = 0; i < 7; i++)
        {
                pard[0] += pard[i];
        }
        return 1;
}


int eamall(int N, double pard[N]) {
        for ( size_t i = 0; i < N; i++ ){
                pard[0] += pard[i];
        }

        return 1;
}