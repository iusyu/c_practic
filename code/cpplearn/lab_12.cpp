#include<iostream>
#include<vector>



class Base {
public:
	friend class Sneaky;
	Base() = default;
	int pub_men(){
		std::cout<<"this is BASE class"<<std::endl;
	}

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

	int max_weight(){
		std::cout<<"I am Sneaky, I am lighter"<<std::endl;
	}
};

class Pando{
public:
	Pando() = default;
	int cute(){
		std::cout<<"I am Panda So don't piss me"<<std::endl;
	}
	int max_weight(){
		std::cout<<"I am pando My weight is What U don't know"<<std::endl;
	}
	~Pando() = default;
};

class NewPinWerid: public Base, public Sneaky, public Pando{
public:
	NewPinWerid() = default;
	int newWerido(){
		std::cout<<"this is new pine werido"<<std::endl;
	}

};


int main(int argc, char *argv[])
{
	Base bp;
	Sneaky sp;
	Pando* pp = new NewPinWerid();
	pp->cute();
	NewPinWerid nn;
	Base& bb = nn;
	//pp->get_men();
	bb.pub_men();
	nn.Pando::max_weight();
	nn.Sneaky::max_weight();
	std::cout<<"sneaky access friend mem:"<<sp.get_men(bp)<<std::endl;

	return 0;
}



