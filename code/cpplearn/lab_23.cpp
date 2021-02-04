//this is line code to
#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include<iomanip>
#include<algorithm>
#include<utility>



const int size_kkk = 512;

using size = unsigned long;


class Sale_data{
public:
	Sale_data() = default;
	std::string ISB;
	size numb;
	double price;
};





int main(int argc, char *argv[])
{
	std::pair<int,double> buffer(23,341);
	std::cout<<std::get<0>(buffer)<<std::endl;
	
	auto pp = std::make_pair(123,"css");
	std::cout<<pp.second<<std::endl;
	
	auto tt = std::make_tuple("123",123,123.1);
	auto pt = std::make_pair(std::make_tuple('d',213,.213), tt);

	return 0;
}

