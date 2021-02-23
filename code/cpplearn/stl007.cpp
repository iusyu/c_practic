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
 * 现实一下 traits特性
 *
 * 
 *
 *
 *
 *
 *
 */
using namespace std;


template<class T>
struct _iterator_traits {
	typedef T* pointer;
};





template<> struct _iterator_traits<class T*> {
	typedef T* value_type;
	typedef T value_typed;
};































int main( int argc, char* argv[])
{
	return 0;
}



