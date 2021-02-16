//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<utility>
#include<random>
#include<ext/slist>
#include<thread>
#include<functional>

#include<unistd.h>

/** 
 * 试验一下 bind的怎么用
 *
 * 
 *
 *
 *
 *
 *
 */
using namespace std;

template<typename Key>
struct sds {
	size_t len;
	size_t sfree;
	Key *buff;
};

template<> struct sds<char> {
};


class foo {
public:
  bool compare(int a, int b) {
    return a>b ? false:true;
  }
};


int main( int argc, char* argv[])
{
	foo ffs;
    	auto f = bind(ffs::compare(),placeholders::_1, 98);


    if ( f(5)) {
      cout<<"this is smaller"<<endl;
    } else {
      cout<<"this is bigger"<<endl;
    }
	return 0;
}



