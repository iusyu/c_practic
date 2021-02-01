//this is line code to
#include<iostream>
#include<vector>
#include<memory>
#include<string>

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
	std::string lines;
	std::getline(std::cin,lines);
	std::cout<<lines<<std::endl;
	char tmp;
	while(std::isspace(tmp)){
		std::cin>>tmp;
		std::cout<<tmp<<lines<<std::endl;
		lines+=tmp;
	}
	return 0;
}

