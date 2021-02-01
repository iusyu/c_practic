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
	std::string text;
	std::cout<<text[0]<<std::endl;
	std::string tmp;
	while( std::cin >> tmp ){
		text+=tmp;
	}

	//std::cout<<text <<std::endl;
	std::string tmp1;

	for( char &c : text ){
		if(std::ispunct(c)){
			tmp1+=c;
		}
	}

	std::cout<<tmp1<<std::endl;
	return 0;
}

