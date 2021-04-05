/**********************************
 * File Name: ss001.c
 *      Date: 2021.04.05 18:58
 *    Author: iusk
 **********************************
 */


#include <stdio.h>

#include <arpa/inet.h>


int main(int argc, char* argv[] ) {
	char* szValue1 = inet_ntoa("1.2.3.4");
	char* szValue2 = inet_ntoa("192.168.0.1");

	printf("address szValue1 : %s \n", szValue1);
	printf("address szValue2 : %s \n", szValue2);
}

