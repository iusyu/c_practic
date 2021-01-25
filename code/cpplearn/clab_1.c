
#include<stdio.h>
#include<stdlib.h>


typedef int (*fp_get_price)(size_t n);




struct Quete {
	fp_get_price get_price;
	double price;

};



struct BlukQuote {
	struct Quete raw_p;
	
};









