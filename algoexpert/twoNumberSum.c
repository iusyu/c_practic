/**
 * File Name:twoNumberSum.c
 *      Date: 2021.04.01
 *    Author: iusk
 *
 */


#include <stdio.h>
#include <stdlib.h>
typedef long long data;

data* hash_array(data N, data* arr);

data sum_it(data N, data arr[N], data sum){
	data x = 0;
	data* hash_table = hash_array(N, arr);
	for(size_t i = 0; i < N; i++) {
		if ( hash_table[ arr[i] % N] != 0;
	}
	
}

data* hash_array( data N, data* arr) {
	data* hash_table = malloc(sizeof(data) * N);
	for ( size_t i = 0; i < N; i++ ) {
		hash_table[ arr[i] % N] = arr[i];
	}
	return hash_table;
}



