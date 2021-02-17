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
class Fraction {
public:
	Fraction(int num, int den =1 ):m_numerator(num),m_denomiator(den) {}

	operator double() const {
		return (double) m_numerator/ m_denomiator;
	}

private:
	int m_numerator;
	int m_denomiator;
};
int main( int argc, char* argv[])
{
	Fraction f(1,5);
	double d = f + 7;
	cout<<"the result is :"<<d<<endl;
	return 0;
}



