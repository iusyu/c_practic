//this is line code to
#include<iostream>
#include<vector>
#include<memory>



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
	std::shared_ptr<Sneaky> ptr_sneak = std::make_shared<Sneaky>();
	ptr_sneak->max_weight();
	return 0;
}



