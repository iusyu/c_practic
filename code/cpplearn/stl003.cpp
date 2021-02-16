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
 * template 的相关特性
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

class Foo{
public:
	std::string compare(int a, int b) {
		return a>b?"biiger":"smaller";
	}
};

string compare( string a, string b) {
	return a>b?a:b;
}

int main( int argc, char* argv[])
{
	Foo fu;

	auto f = bind(&Foo::compare, fu, placeholders::_1, 60);
	vector<int> vc;
	auto f1 = bind(compare, placeholders::_1, "buufer");
	for( int i = 0; i<10 ; i++ ) {
		cout<< f(i)<<endl;	
	}

	return 0;
}



