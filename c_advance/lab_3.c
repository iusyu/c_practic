

#include<stdio.h>
#include<stdlib.h>

#include"buffer.h"


int main(void){
    Buffer* buf;
    buffer_initilize(&buf);
    char buffer[1024];
    buf->read(buf,buffer);
    
    for (size_t i = 0; i < 1024; i++)
    {
        putchar(buffer[i]);
    }

    putchar('\n');
    buffer_destructor(&buf);

    return  0;    

}
