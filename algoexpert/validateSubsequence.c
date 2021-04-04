/**
 * validateSubsequence.c
 * validate subsequence 
 * input [ 5, 1, 22, 25, 6, -1, 8, 10. 11, 7]
 * subsequence [1, 6, -1, 10]
 *
 */
#include <stdio.h>
#include <stdlib.h>


typedef int data;


int validateSubsequence( size_t N, data inputArr[N], size_t M, data subArr[M]) {
	size_t pidx = 0;
	for (size_t idx = 0 ; idx < N; idx ++ ) {
		if(inputArr[idx] == subArr[pidx] ) {
			pidx++;
			if( pidx == M) {  // the last will over the array;
				return 1;
			}
		}
	}
	if ( pidx != M-1)
		return 0;
}

