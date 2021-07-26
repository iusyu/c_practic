#include <iostream>
#include <array>
#include <list>
#include <vector>
#include <algorithm>



template <typename T>
std::ostream& printContainer(std::ostream& out, const T& container){
	out << "Container Have:" << std::endl;
	std::for_each( container.begin(), container.end(), [&](auto& p) { out << p << " " ; });
	out << std::endl;
	return out;
}

int main(int argc, char* argv[] )
{
	using namespace std;
	array<string,100>::size_type size;
	array<list<string>,50> alist;

	vector<string> v1 {"JULY", "DEC", "MAY", "MAR", "APR"};
	printContainer(std::cout, v1);
	vector<string> v2 = v1;
	printContainer(std::cout, v2);
	vector<string> v3 (v1);
	printContainer(std::cout, v3);
	vector<string> v4 (5);
	printContainer(std::cout, v4);
	vector<string> v5 (5,"WCNM");
	printContainer(std::cout, v5);
	list<string> l1 (v1.begin(), v1.begin() +3);
	printContainer(std::cout, l1);
}
