/**
 * MaximumSumSubarrayOfSizeK.cpp
 *
 * Problem Statement:
 * 	Given an array of positive numbers and positive number 'k', 
 * 	find the maximum sum of any contiguous subarray of size 'k'.
 *  Input: [2,1,5,1,3,2] K=3
 *  Output: 9
 *  Explanation: subarray with maximum sum is [5, 1, 3].
 *
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <array>
#include <memory>


#include "AbsSolution.h"

using std::vector;
using std::shared_ptr;
using std::array;
using std::list;
class MaximumSumSubarrayOfSizeK: public AbsSolution{
public:
	MaximumSumSubarrayOfSizeK( size_t kk, vector<int> & vec):K(kk), ar(vec), max(vec[0]) {}
	bool getAnswer() override;
	void display() override;

	void recordMaxSubarray(std::vector<int>::iterator& ptr);
private:
	size_t K;
	vector<int> ar;
	int max;
	shared_ptr<vector<int>> maxArr;


	
};

bool MaximumSumSubarrayOfSizeK::getAnswer() {
	for( auto bptr = ar.begin(); bptr != ar.cend(); bptr++) {
		int tmp = 0;
		if( (tmp = (*(bptr+1) + *(bptr+2) + *bptr ) ) > this->max) {
			this->recordMaxSubarray(bptr);
			
		}
	}
}


void MaximumSumSubarrayOfSizeK::recordMaxSubarray(std::vector<int>::iterator& ptr){
	for(size_t i=0; i < this->K; i++) {
		max += *(ptr+i);
		maxArr = std::make_shared(vector<int>());
		maxArr->push_back(*(ptr+i));
	}
}
