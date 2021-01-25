
#include<stdio.h>
#include<stdlib.h>
#include"obLinkedList.h"
//#include"stu_info.h"
//#include"file_IO.h"
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
	printf("this is compare :%d %d", *pa ,*pb );
	return (*pa) > (*pb);
}


int main(int argc, char *argv[])
{
	olist* list;
	
	Get_olist(&list);
	int *p = NULL;
	p = calloc(1, sizeof(int));
	(*p) = 21;
	list->add_back(list, p);
	iterator itr = list->get_iter(list);
	ptrToNode ptr_rr = itr.head->next;
	

	for( size_t i = 0; i<5; i++){
		int* pint = calloc(1,sizeof(int));
		(*pint) = i;
		list->add_back(list, pint);
	}
//	int compd = 3;
//	list->deletee(list, &compd, comppp, detoor);	
	while(ptr_rr!=NULL){
		int *p = (int*)ptr_rr->info;
		printf("  %d ",*p);
		ptr_rr = ptr_rr->next;
	}

	Destory_olist(&list,detoor);
	
	return 0;
}





