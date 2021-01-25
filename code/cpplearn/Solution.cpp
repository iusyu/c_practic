#include<iostream>
#include<list>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<ctime>




#include"Solution.hpp"

void print_func_name_version(std::string str){
	std::cout<<"----------- this is "<<str<<" --------------"<<std::endl;

}




void init_data(std::vector<int>& vi){

	std::srand(std::time(nullptr));
	auto tmp = std::rand() %10000;
	for(int i = 0; i< 100000 ; ++i){
		vi.push_back( std::rand()% 100);
	}


}


template<typename T>
void init_Date(T& da){

}


void _q_10_1() {
	print_func_name_version(" _q_10_1");

	std::vector<int> vi;
	init_data(vi);
	auto ou = std::count(vi.begin(),vi.end(), 8);

	std::cout<<"result is: "<<ou<<std::endl;
}


void _q_10_2(){
	print_func_name_version("_q_10_2");
	
	std::string stss{"this is a line code od fucbckde demmadf"};
	std::ostringstream os (stss);
	std::list<char> lc;
	for(auto tmp:stss)
		lc.push_back(tmp);
	auto ou = std::count(std::begin(lc),std::end(lc), 'c');
	std::cout<<"result is: "<<ou<<std::endl;
}





void Solution::getAnwser(){
	_q_10_1();
	_q_10_2();
}









