#include <new>
#include<vector>
#include<iostream>
#include<list>
#include<vector>


// different init to vector container 
int test_9_3_1(){ 
	std::vector<int> v1 (20, 33);
	std::vector<int> v2 (20);
	std::vector<int> v3 = v1;
	std::vector<int> v4(v1);
	std::vector<int> v5 {1,2,3,45,5};
//	std::vector<int> v6 {v1};
	
	return 0;
	
}




int main() {

	std::cout<< "test_9_3_1 ------->>>"<<std::endl;
	test_9_3_1();
	return 0;
}















