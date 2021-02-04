//this is line code to
#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include<iomanip>
#include<algorithm>
#include<utility>
#include<future>




const int size_kkk = 512;

using size = unsigned long;


class Sale_data{
public:
	Sale_data() = default;
	std::string ISB;
	size numb;
	double price;
};



class Call_duty{
public:
	void operator()(const int a, const std::string &word){
		std::cout<<word<<std::setw(5)<<":"<<std::endl;
	}

};


int main(int argc, char *argv[])
{
	
	return 0;
}

