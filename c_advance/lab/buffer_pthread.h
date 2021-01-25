
// obj的buffer模型


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>



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
    struct buff_node* next;
};





// implelment
struct buffer {
    // in out pointer;
    Buffer_io_api io;

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
    (*self)->io = (Buffer_io_api)malloc(sizeof(buffer_io));
    (*self)->io->in = tmp;
    (*self)->io->out = tmp;


    for (size_t i = 0; i < 9; i++)
    {
        tmp->next = (buffer_queue)malloc(sizeof(struct buff_node));
        tmp = tmp->next;
    }
    tmp->next = (*self)->io->in;
    printf("OKK BUFFER READY!\n");

    (*self)->read = _read;
    (*self)->write = _write;
    (*self)->destory = _destory;
}

int buffer_destructor(Buffer** self){
    (*self)->destory(*self,NULL);
    free((*self)->io);
    free(*self);
    printf("FINISH! \n");
}






int _read(Buffer* self, char* dest){
    Buffer_io_api io = self->io;
    if(io->in != io->out && io->in != NULL){
        pthread_t pt;
        if(io->out->next->next == io->in){
            int ret = pthread_create(&pt,NULL,(void*)_wrote_pthread,(void*)io);
        }
        memcpy(dest,io->out->buf,1024);
        io->out = io->out->next;
        pthread_detach(&pt);
        
    }
    else
    {
        self->write(self,dest); //如果没有缓存了 就读满

    }
    
}


// using thread to acclerate the fill speed
void* _wrote_pthread(void* inp){
    Buffer_io_api io = (Buffer_io_api)inp;
    while (io->in->next != io->out)
    {
        rand_s(io->in->buf);
        io->in = io->in->next;
    }
    
    
}



// fillful buffer;
int _write(Buffer* self,char* dest){
    if(self->in->next != self->out){
        //pass
        rand_s(self->in->buf);
        self->in->is_fill = true;
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


int rand_s(char*arr){
    for (size_t i = 0; i < 1024; i++)
    {
        arr[i] = rand()%256;
    }
    
}





