//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<utility>
#include<random>

#include"students.hpp"
/** 
 * Good Class的几点标志
 * 1. 是否使用
 *
 *
 *
 *
 *
 *
 *
 *
 */



class complex {
public:
	complex( double r=0, double i = 0): re(r),im(i) {}
	// complex():re(0),im(0) {} 这种构造函数是禁止的

	complex& operator+= (const complex& );

	double real() const { return re; } // 假如不加const 然后用户使用 const complex a 就会报错
	double imag() const { return im; }
	void real( double r) { re = r; }
	void imag( double i) { im = i; }


private:

	double re, im;
};


class Singeton {
public:
	static Singeton& get_instance(double de);

private:
	Singeton(double de):_pp(de) {}

	double _pp;
};



int main(int argc, char *argv[])
{
	student pearson("pearson", "123124");
	student bill("biill","463456435");
	if ( bill == pearson ) {
		std::cout<<" got two people " <<std::endl;
	}
	std::cout<<pearson;
	return 0;
}

