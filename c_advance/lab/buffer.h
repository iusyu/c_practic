
// obj的buffer模型


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//#include<pthread.h>



#ifndef __BUFFER
#define __BUFFER

//buffer list 
struct buff_node;
typedef struct buff_node * buffer_queue;




//buffer  obj
struct buffer;
struct buffer_io;
typedef struct buffer_io Buufer_io;
typedef struct buffer_io* Buffer_io_api;

typedef struct buffer Buffer;
typedef int (*fp_rd)(Buffer*, char*);

int _read(Buffer*, char*);
int _write(Buffer*, char*);
int _destory(Buffer*, char*);

int rand_s(char*);
int buffer_initilize(Buffer**);
int buffer_destructor(Buffer**);



#endif /*  __BUFFER  */


struct buff_node{
    char buf[1024];
    //bool is_fill = false;
    struct buff_node* next;
};





// implelment
struct buffer {
    // in out pointer;
    buffer_queue in;
    buffer_queue out;

    // method
    fp_rd read;
    fp_rd write;
    fp_rd destory;


};


struct buffer_io{
    buffer_queue in;
    buffer_queue out;
};


// initialzie;
int buffer_initilize(Buffer** self){
    *self = (Buffer*)malloc(sizeof(Buffer));
    buffer_queue tmp = (buffer_queue)malloc(sizeof( struct buff_node));
    (*self)->in = tmp;
    (*self)->out = tmp;
    for (size_t i = 0; i < 9; i++)
    {
        tmp->next = (buffer_queue)malloc(sizeof(struct buff_node));
        tmp = tmp->next;
    }
    tmp->next = (*self)->in;
    printf("OKK BUFFER READY!\n");

    (*self)->read = _read;
    (*self)->write = _write;
    (*self)->destory = _destory;
}

int buffer_destructor(Buffer** self){
    (*self)->destory(*self,NULL);
    free(*self);
    printf("FINISH! \n");
}





int _read(Buffer* self, char* dest){
    if(self->in != self->out && self->in != NULL){
        memcpy(dest,self->out->buf,1024);
        self->out = self->out->next;
        //pthread_detach(&pt);
        
    }
    else
    {
        self->write(self,dest); //如果没有缓存了 就读满

    }
    
}


// using thread to acclerate the fill speed



// fillful buffer;
int _write(Buffer* self,char* dest){
    if(self->in->next != self->out){
        //pass
        rand_s(self->in->buf);
        //self->in->is_fill = true;
        self->in = self->in->next;
        printf("WRITE IN BUFFER OKK \n");
    }
}




// destory
int _destory(Buffer* self, char* dest){
    buffer_queue tmp = self->in;
    self->out = NULL;
    while (tmp->next != tmp)
    {
        buffer_queue fr = tmp->next;
        tmp->next = tmp->next->next;
        free(fr);
    }

    free(tmp);

    printf("DESTORY SUCCESS \n");
    
}


int rand_s(char* dest, char* res){
        *dest = *res;
}





