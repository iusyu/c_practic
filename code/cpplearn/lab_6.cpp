
#include<iostream>
#include<vector>
#include<string>


using namespace std;

class Quote {
public:
	Quote() = default;
	Quote(double d):price(d) {}

	virtual double net_price(size_t m) {
		return m*price;
	}

protected:
	double price;
};



class DiscQuote:public Quote {
public:
	DiscQuote() = default;
	DiscQuote(double d, double dr, size_t m):Quote(d),limitNum(m),discRate(dr) {}

	virtual double net_price(size_t m) = 0;



protected:
	size_t limitNum;
	double discRate;
};

double DiscQuote::net_price(size_t m) {
	return m*price*discRate;
}




class BlukQuote:public DiscQuote{
public:
	BlukQuote() = default;
	BlukQuote(double d, double drr, size_t mk):DiscQuote(d,drr,mk) {}
	
	double net_price(size_t m) override {
		if(m<limitNum) {
			return m*discRate*price;
		} else {
			return m*price;
		}
	}
};




int main(int argc, char *argv[])
{
	DiscQuote di(23.5,0.7,10);

	return 0;
}






