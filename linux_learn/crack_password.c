
#include<stdio.h>
#include<stdlib.h>


char* base_element[] = {
	"jiajia",
	"jia",
	"sy",
	"1195594964",
	"119",
	"119559",
	"1998",
	"19980812",
	"0812"
};


char* base_element_v[] = {
	"jia",
	"1998",
	"0812",
	"sy"
};


char* short_elem[] = {
	"jia",
	"jiajia",
	"0812",
	"1998"
};

void short_pwd(){
	for( size_t i = 0; i < 4; i++){
		for(size_t j = 0; i < 4; j++){
			printf("%s%s",short_elem[i], short_elem[j]);
		}
	}
}


int main(int argc, char *argv[])
{
	
	for(size_t i = 0; i < 9; i++){
		
		for(size_t j = 0; j < 9; j++){
			printf("%s%s\n",base_element[i],base_element[j]);
		}
	}
	return 0;
}



