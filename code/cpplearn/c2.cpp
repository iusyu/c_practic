#include<iostream>
#include<vector>



void check_type_conversion(){
	unsigned u = 10, u2 = 42;

	std::cout<< u - u2 <<std::endl;
	std::cout<< u2 - u  <<std::endl;

	int i = 10, i2 = 42;

	std::cout<< i - i2 <<std::endl;
	std::cout<< i2 - i << std::endl;
	std::cout<< i - u <<std::endl;
	std::cout<< u - i <<std::endl;

}


void litera(){
	auto ul = 3214123124uL;
	auto ll = 2413251235uL;
	if( typeid(ul) == typeid(ll)){
		std::cout<<"this is the samme 简直就是快乐"<<std::endl;

	}
	std::cout<<ul<<std::endl;
	std::cout<<ll<<std::endl;

	std::cout<<"\012 boommer bool "<<std::endl;
	std::cout<<"boommer bool "<<std::endl;
	std::cout<<"boommer bool "<<std::endl;
}



void litera_output(){
	std::cout<<"2M\n";
	std::cout<<"2\tM\n";

	std::cout<<"2\vM\n";
}

void varibale_ub(){
	int a; // decleare in function will cure undefine behavris
	std::cout<<a<<std::endl;

}


void checkBlock(){
	int i = 100;
	int sum = 0;
	for( size_t i = 0; i < 10; i++)
		sum += i;

	std::cout<<i<<" "<<sum <<std::endl;
}

void name_scope(){
	int catch_qw;
}


int c;

int main(int argc, char *argv[])
{
	litera();
	litera_output();
	varibale_ub();
	checkBlock();
	//check_type_conversion();
	std::cout<<c<<std::endl;
	return 0;
}
