//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<utility>
#include<random>

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
	const double use() const;
private:
	Singeton(double de):_pp(de) {}

	const double _pp;
};

Singeton& Singeton::get_instance(double de){
	static Singeton a(de);
	return a;
}

const double Singeton::use() const {
	return _pp;
}



int main(int argc, char *argv[])
{
	auto &rat = Singeton::get_instance(.23112);
	std::cout<< " the reulst of 100000 haves : "<< 100000+ 100000*rat.use()<<std::endl;

	return 0;
}



