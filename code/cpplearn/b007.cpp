
//this is line code to 
#include<iostream> 
#include<vector>
#include<string>
#include<iomanip>
#include<boost/asio.hpp>
#include<memory>


#include<unistd.h>

/** 
 * 测试base class has a 
 *  小试牛刀
 *
 * 
 *
 *
 *
 *
 *
 */
using namespace std;

class BaseClass {
public:
	BaseClass() = default;
	
	~BaseClass() {
		cout<<"BaseClass is called"<<endl;
	}
};



class DrivedClass: public BaseClass {
public:
	DrivedClass() = default;
	~DrivedClass() {
		cout<<"DrivedClass dtor is called"<<endl;
	}
};



int main(int argc, char *argv[])
{
	BaseClass *pb;
	DrivedClass *pd = new DrivedClass();
	pb = pd;
	delete pb;
	return 0;
}



