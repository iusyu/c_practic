#include<iostream>
#include<vector>



class Base {
public:
	friend class Sneaky;
	Base() = default;
	int pub_men();

	~Base() = default;
protected:
	int prot_men = 2;
private:
	int priv_men = 3;
};


class Sneaky{
public:
	~Sneaky() = default;
	int get_men(Base s){
		return  s.priv_men;
	}
};

int main(int argc, char *argv[])
{
	Base bp;
	Sneaky sp;
	std::cout<<"sneaky access friend mem:"<<sp.get_men(bp)<<std::endl;

	return 0;
}



