
#include<iostream>
#include<string>



using namespace std;

class Quote {
	public:
		
		Quote() = default;
		Quote(double p):price(p) {}


		virtual size_t getPrice(size_t num) {
			return price*num;
		}

		virtual void debug(void) {
		}

		virtual ~Quote() = default;


	protected:
		double price;


};


class CharginQuote:public Quote {
	public:
		CharginQuote() = default;
		CharginQuote(double d):Quote(d),UpRate(1),num(1) {}
		CharginQuote(double d, double ur, size_t n):Quote(d),UpRate(ur),num(n) {}

		size_t getPrice(size_t nm) override {
			if(nm >= num) 
				return nm*UpRate*price;
			else
				return nm*price;
		}

		void debug(void) override {
			cout<<"this CharginQuote object------"<<endl;
			cout<<"price is :: "<<price <<endl;
			cout<<"UpRate is:: "<< UpRate <<endl;
			cout<< "num is  :: " << num <<endl;
		}


	protected:
		double UpRate;
		size_t num;

};

class BlukQuote: public Quote {
	public:
		BlukQuote() = default;
		BlukQuote(double d):Quote(d){}
		BlukQuote(double d, double br, size_t li):Quote(d),barginRate(br),barginNumLimit(li) {}
		size_t getPrice(size_t num) override {

			if(num<barginNumLimit) {
				return price*num*barginRate;
			}
			else
				return price*num;
		}

		void debug(void) override {
			cout<<" this is a BlukQuote Ob -------"<<endl;
			cout<<" price is ::" <<price <<endl;
			cout<<" barginRate is :: "<< barginRate <<endl;
			cout<<"barginNumLimit is ::"<< barginNumLimit<<endl;
		}

		~BlukQuote() = default;

	private:
		double barginRate;
		size_t barginNumLimit;


};



int main(int argc, char *argv[])
{
	BlukQuote margin(43,0.6,5);
	Quote hallow(43);
	BlukQuote& margin_re = margin;


	cout<<"6 books bougt price : "<< margin.getPrice(6)<<endl;
	
	cout<<"4 books bougt price : "<< margin.getPrice(4)<<endl;
	cout<<"actual price 4 books price:" << hallow.getPrice(4) <<endl;
	
	margin.debug();
	hallow.debug();

	CharginQuote mk (56,1.4, 10);

	mk.debug();
	//cout<<"actual price 4 books price:" << margin_re->Quote::getPrice(4) <<endl;


	return 0;
}




