#include<stdio.h>
//#include<slist.h>
#include<stdlib.h>
#include"obLinkedList.h"
//#include"stu_info.h"
//#include"file_IO.h"
#include"slist.h"
#include<list.h>




#define LEN 64


typedef struct info{
	char name[64];
	char id[64];
}id_card;

int detoor(void* m){
	free(m);
	return SUCEE;
}

int comppp(void* a, void* b){
	int* pa = (int*)a;
	int* pb = (int*)b;
	return (*pa) > (*pb);
}




int main(int argc, char *argv[])
{
	char buff_id[64];
	
	SListEntry* lst;
	slist_prepend(&lst,NULL);
	
	for(size_t i=0; i<LEN ; i++){
		int* p = calloc(1,sizeof(int));
		*p = i;
		slist_prepend(
	}

	return 0;
}





