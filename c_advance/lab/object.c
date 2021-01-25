
#include<stdio.h>
#include<stdlib.h>


// Declear

typedef struct object Object;
typedef int (*func_tas)(Object *);

struct object{
    int a,b;
    func_tas add, sub;
};

static int __add(Object *self){
    return self->a + self->b;
}

static int __sub(Object *self){
    return self->a - self->b;
}

int init_object(Object ** self){  //为什么使用 **self
    if(NULL == (*self = malloc(sizeof(Object))))
        return -1;
        
        (*self)->a = 0; (*self)->b = 0;
        (*self)->add = __add; (*self)->sub = __sub;
        return 0;
}

int main(void){
    Object *c;
    init_object(&c);
    c->a = 512;
    c->b = 64;

    printf(" a add b = %d \n", c->add(c));
    printf(" a sub b = %d \n", c->sub(c));


    return 0;


}








