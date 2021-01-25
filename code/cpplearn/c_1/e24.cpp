
#include<iostream>
#include<vector>
#include<string>




class Sale_Item {
public:
	Sale_Item() = default;
	Sale_Item(std::string i):isb(i),saleNumber(0) { }
	Sale_Item(std::string i, std::size_t n):isb(i),saleNumber(n) { }

	const std::string& getISB() const {
		return isb;
	}
	const std::size_t getSaleNum() const {
		return saleNumber;
	}
	void AddSaleNumber(std::size_t n) {
		saleNumber+=n;
	}



private:
	std::string isb;
	std::size_t saleNumber;
};


std::ostream& operator<<(std::ostream& out, const Sale_Item& sl){

	out<<"_______________________________________________"<<std::endl;
	out<<"books ISB : "<<sl.getISB()<<std::endl;
	out<<"sale out number : "<<sl.getSaleNum()<<std::endl;
	return out;
}






int main(int argc, char *argv[])
{
	Sale_Item sl ("32491347-341-34sqe1-2131",20);
	std::cout<<sl;
	return 0;
}


