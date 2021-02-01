//this is line code to
#include<iostream>
#include<vector>
#include<memory>

#include"lab_17.cpp"



extern const int size_kkk;


void const_some(){
	double dval = 3.141576;
	const int &ri = dval;
	
	//int &r = 4; 
	const int &ric = 4;

	// ri = 4;
	std::cout<< ri << std::endl;

}

void _constexpr(){
	constexpr char* pst = nullptr;
	char* dkkd = "cddaf";
	//pst = dkkd;
	const int ii = 9;
	const auto &iii = ii;

	int aa = 10;
	int &aar = aa;
	int *aap = & aar;
	decltype((aa)) dd = aa;
	dd = 20;
	std::cout<< aa <<std::endl;

}


int main(int argc, char *argv[])
{
	std::cout<<size_kkk<<std::endl;
	std::shared_ptr<Sneaky> ptr_sneak = std::make_shared<Sneaky>();
	ptr_sneak->max_weight();
	const_some();
	_constexpr();
	return 0;
}



