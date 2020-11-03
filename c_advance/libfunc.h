#include"list_ob.h"
/* declare of function  */


int swap(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
    return -1;
}





int delete_min(List *self){
    ptrToNode ptr_run = self->head->next;
    int* minPtr = &(self->head->next->elem);
    while (ptr_run != NULL)
    {
        if(ptr_run->elem < (*minPtr)){
            minPtr = &(ptr_run->elem);
            ptr_run = ptr_run->next;
        }
        else
        {
            ptr_run = ptr_run->next;
        }
    }

    swap(&(self->head->next->elem), minPtr);
}



int main(void){
    List* sql;
    init_list(&sql);
    
}






