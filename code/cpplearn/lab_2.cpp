#include<string>
#include<cctype>
#include<iostream>
#include<vector>
#include<fstream>
#include<list>
#include<deque>


/*
std::vector read_f(std::string path) {
	std::fstream pf{path};
	std::vector code;
	if(pf.good()){
		//std::string tmpString;
		std::stringstream tmpString;
		while (std::getline(pf,tmpString))
		{
			
		}
		
	}
}


int test9_2(void) {
	std::list<int> buu {1,2,3,4,5,5,6,6,7,7};
	std:list<std::deque<int>> t1 {{1,2,3,4,5}, {0,213,341,5341,3241}};

	
	}
*/


std::vector<int>::iterator test9_2_1(std::vector<int>::iterator bg, std::vector<int>::iterator ed, int m){

	std::cout<<"this is test 9.2.1 >> " <<std::endl;
	std::cout<<"output a right iterator of std::vecotr<int>::iterator"<<std::endl;
	
	std::cout<<"resutl is >>";
	//std::cout<<*result<<std::endl;


	while(bg != ed) {
		if( m == *bg){
			*bg = 9999;
			return bg;
		}
		++bg;
	}
	return ed;
}


std::vector<int>::const_iterator test_9_2_2(std::vector<int>::const_iterator bg, std::vector<int>::const_iterator ed, int m) {

	while( bg != ed) {
		if( m == *bg) 
			//*bg = 9999;
			return bg;
		++bg;
	}

	return ed;
}

int test_9_2_3() {
	const std::vector<int> vi;
	const int m {9};
	
	return 0;

}


std::vector<int> copy_vi(std::vector<int>::const_iterator bg, std::vector<int>::const_iterator ed) {
	return std::vector<int>(bg, ed);
}

int test_9_13(void) {
	using namespace std;
	list<int> li = {1,23,4,5,5,6,63,121};
	vector<double> vd (li.begin(),li.end());

	std::cout << vd[1] << std::endl;
	std::cout << li.front() << std::endl;
	return 10;
}




int main(void) {


	using namespace std;



	string iii("this is a line charactor");

	cout<<iii<<endl;


	for(auto& c:iii) {
		c = toupper(c);
	}

	cout<<iii<<endl;

	// test 9.2.1
	vector<int> vi {1,2,3,4,4,5,5,6,463,234,5545};
	auto result = test9_2_1(vi.begin(), vi.end(), 5);
	auto result1 = test_9_2_2(vi.cbegin(), vi.cend(), 463);


	
	cout<<"resutl is >>";
	cout<<*result<<endl;
	
	cout<<"resutl1 is >>";
	cout<<*result1<<endl;

	cout<<" test_9_13 "<<endl;



	return 0;
}






