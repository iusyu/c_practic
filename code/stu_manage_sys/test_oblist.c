
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
	//int* pb = (int*)b;
	if( (*pa) % 2 == 0)
		return 1;
	else
		return 0;
}


int main(int argc, char *argv[])
{
	olist* list;
	
	Get_olist(&list);
	int *p = NULL;
	p = calloc(1, sizeof(int));
	(*p) = 55;
	list->add_front(list, p);
	//iterator itr = list->get_iter(list);
	//ptrToNode ptr_rr = itr.head->next;

	

	for( size_t i = 0; i<1000000; i++){
		int* pint = calloc(1,sizeof(int));
		(*pint) = i;
		list->add_front(list, pint);
	}
	int compd = 500;
	int compe = 6;

	list->deletee(list, &compd, comppp, detoor);
	printf("two compare : %d\n", comppp(&compd, &compe)); 	
	ptrToNode ptr_rr = list->head->next;
	while(ptr_rr!=NULL){
		int *pt = (int*)ptr_rr->info;
		printf("  %d ",*pt);
		ptr_rr = ptr_rr->next;
	}

	Destory_olist(&list,detoor);
	
	return 0;
}





