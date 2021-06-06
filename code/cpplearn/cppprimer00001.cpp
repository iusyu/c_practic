#include <iostream>


template<typename T>
int f1(T a, T b) {
	std::cout<<__FUNCTION__<<std::endl;
}

template<typename T, typename M>
int f2(T a, M b) {
	std::cout<<__FUNCTION__<<std::endl;
}


int main(int argc, char* argv[] ) {
	int i = 0, j = 42;
	int *p1 = &i, *p2 = &j;
	const int *cp1 = &i, *cp2 = &j;
	f1(p1, p2);
	f2(p1,p2);
	f1(cp1, cp2);
	f2(cp1, cp2);
	//cp2f1(p1, cp1);
	f2(p1, cp1);
	return 0;
}
