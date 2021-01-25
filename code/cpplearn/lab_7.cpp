

#include<iostream>




using namespace std;




template< typename T>
int _compare(T& a, T& b) {
	if(a >b )
		return 1;
	if(a <b)
		return 0;
	return 0;		// out of condition expression needs a return  
}





int main(int argc, char *argv[])
{
	int a= 4, b= 8;
	cout<<"_compare version of deduct:: "<<endl;
	cout<<"compare(4, 8)::"<<_compare(a,b)<<endl;

	return 0;
}



















