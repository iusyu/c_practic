//this is line code to
#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include<iomanip>
#include<algorithm>
#include<utility>
#include<future>
#include<thread>
#include<random>


using namespace std;


const int size_kkk = 512;

using size = unsigned long;


class Sale_data{
public:
	Sale_data() = default;
	std::string ISB;
	size numb;
	double price;
};

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
	complex(
	double re, im;
};

class Gun {
public:
	static Gun& getInstance()

private:


};

class Call_duty{
public:
	void operator()(const int a, const std::string &word){
		std::cout<<word<<std::setw(5)<<":"<<std::endl;
	}

};

int doSomething( char c){
	std::default_random_engine dre(c);
	std::uniform_int_distribution<int> id (10,10000);

	for (int i = 0; i<10; ++i) {
		this_thread::sleep_for(chrono::milliseconds(id(dre)));
		cout.put(c).flush();
	}
	return c;
}


int func_1() {
	return doSomething('a');
}
int func_2() {
	return doSomething('c');
}

int func_3() {
	return doSomething('+');
}


int main(int argc, char *argv[])
{
	thread fp (Call_duty);
	std::future<int> result1(std::async(func_1));
	std::future<int> result3 = std::async(std::launch::async, func_3);

	int result2 = func_2();
	int result = result1.get() + result2 + result3.get();
	cout<<"\n result of func1() + func_2() :"<< result <<std::endl;
	return 0;
}

