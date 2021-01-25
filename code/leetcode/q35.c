#include<stdio.h>
#include<stdlib.h>




size_t find_same_idx(int N, int arr[N], int x) {
	size_t i = 0;
	for (; i<N; i++) {
		if(arr[i] == x)
			return i;
		if( arr[i]>=x) {
			return --i;
		}
	}

	return i;
}








