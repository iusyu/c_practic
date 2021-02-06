//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<utility>
#include<random>

/** 
 * Inheritance with virtual
 * 
 *
 *
 *
 *
 *
 */

class Jargin {
public:
	Jargin() = default;
	virtual void wearShuts(std::string shutsname);
	virtual void wearSuits(std::string suitsname);
	virtual void getWorm(double time);
	virtual void Run(double time);
	virtual void stretch(double time);
	void jargin();
};

void Jargin::wearShuts(std::string shutsname = "NIKE") {
	std::cout<<"I wear a "<<shutsname<<" Shuts"<<std::endl;
}
void Jargin::wearSuits(std::string suitsname = "ADADIS") {
	std::cout<<"I wear a "<<suitsname<< "suits"<<std::endl;
}
void Jargin::getWorm(double time = 20) {
	std::cout<<"I will get "<<time<<"min"<<std::endl;
}
void Jargin::Run(double time = 20) {
	std::cout<<"get some time to RUN"<<std::endl;
}
void Jargin::stretch(double time = 20){
	std::cout<<"I just stretch my musile"<<std::endl;
}

void Jargin::jargin() {
	wearShuts();
	wearSuits();
	getWorm();
	Run();
	stretch();
}


class speedRun: public Jargin {
	public:
	void Run(double time) override;
};

void speedRun::Run(double time = 1000) {
	std::cout<<" I just run to end of world"<<std::endl;
}


int main(int argc, char *argv[])
{
	speedRun sr;
	sr.jargin();
	std::cout<<"-------------------------"<<std::endl;
	Jargin jar;
	jar.jargin();
	return 0;
}



