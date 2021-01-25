#include<stdio.h>
#include<stdlib.h>


struct node;
typedef struct node Node;
typedef struct node* ptrToNode;
typedef ptrToNode Position;

typedef struct list List;
typedef int (*func_l)(List*, Node* );
typedef int (*func_a)(List*);




struct node{
    int elem;
    ptrToNode next;
};


struct list{
    ptrToNode head;
    func_l add, delete;
    func_a create_list,print;
};

int _create_list(List* self){
    if(NULL == (self->head = (Node*)malloc(sizeof(Node))))
        return -1;
    //self->head = (Node*)malloc(sizeof(node));
    self->head->elem = -1;
    self->head->next = NULL;
    return 1;
}

int __add(List *self, Node* a){
    a->next = self->head->next;
    self->head = a;

    return 1;
}

int __print(List*self){
    
    ptrToNode p = self->head;

    while (p != NULL)
    {
        printf("%d ", p->elem);
        p = p->next;
    }
    return 1;
    
}





int init_list(List **self){
    if(NULL == (*self = (List*)malloc(sizeof(List))))
        return -1;
    (*self)->head = (Node*)malloc(sizeof(Node));
    (*self)->add = __add;
    (*self)->print = __print;
    (*self)->create_list = _create_list;
    return 1;
}

int main(void){
    List* l;
    init_list(&l);
    l->create_list(l);
    Position tmp = (Position)malloc(sizeof(Node));
    tmp->elem = 200;
    tmp->next = NULL;
    l->add(l,tmp);
    l->print(l);
    return 1;
}




