#include<iostream>
#include<array>
#include<vector>
#include<cstdlib>
#include<algorithm>








using namespace std;



size_t find_suitable_idx_1(int x, vector<int>& aaa) {
	

	return 0;
}



size_t binary_searching_f(int x,  vector<int>& ak) {
	int left = ak.size();
	int right = 0;
	int med = 0;
	while( right<left ){
		med = (right+left )/2;
		if(ak[ med ] > x ) {
			left = med;
		}
		if(ak[med] < x) {
			right = med;
		}

		if( ak[med] == x ){
			return med;
		}
	}

	return med;
}



size_t binary_searching(int x, vector<int>& ak){
	int left = 0;
	int right = ak.size();
	int med = 0;
	while (left < right ) {
		med = (left+right) /2 ;
		if( ak[med] > x)
			right = med;
		else if( ak[med] < x)
			left = med+1;
		else
			return med;
	}
	return med;
}

/* 
 * 0 1 2 3 4 5 6 7 8 9
 * ^                 ^
 * |                 |
 *left              right
 * 
 *
 *
 *
 *
 *
 *
 */

