//this is line code to
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<utility>
#include<random>
#include<ext/slist>
#include<thread>

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




int main( int argc, char* argv[])
{

	return 0;
}



