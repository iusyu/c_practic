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

	vector<double> vd {1.3,2.5,3.7,45,6.123124, 3241324.134,3.13};
	list<int> li (vd.begin(), vd.begin() + 4);
	printContainer(std::cout, vd);
	printContainer(std::cout, li);
}
