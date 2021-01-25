
/*
 * toto.h 
 * toto_init() inline form test
 *
 *
 *
 *
 *
 */


#include<stdio.h>



int camall(double pard[1]);
int damall(double pard[7]);
int eamall(int N, double pard[N]);




inline
int toto_init ( void* str ) {
	printf("this is inline function name : %s \n", __func__);

	return -1;
}




