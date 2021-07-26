#include <iostream>
#include <forward_list>


int main(int argc, char* [])
{
	using namespace std;

	forward_list<int> l1 (100);
	forward_list<int> l2 (100,999);

	cout << "forward_list<int> l1.size :" << l1.size() << std::endl;
	cout << "forward_list<int> l2.size :" << l2.size() << std::endl;
}
