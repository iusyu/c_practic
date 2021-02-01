//this is line code to
#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include<iomanip>
#include<algorithm>


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
	std::vector<int> vi;
	int tmp;
	while (std::cin>>tmp){
		vi.push_back(tmp);
	}
/*	
	int sum = 0;
	for( auto &vii: vi){
		if( vii > 60){
			std::cout<< 1 <<std::setw(5);
		} else {
			std::cout<< 0 <<std::setw(5);
		}
		//std::cout<<vii<<std::setw(0);
	} 

	*/
	std::stable_sort(vi.begin(), vi.end(), [](auto &a, auto &b){
			return a>b;
			});

	auto f1 = [](auto & a){
		if( a > 60 ){
			std::cout<<1<<std::setw(2);
		} else {
			std::cout<<0<<std::setw(2);
		}
	};
	std::for_each(vi.cbegin(), vi.cend(), f1);
	std::cout<<6 <<std::endl;
	return 0;
}

