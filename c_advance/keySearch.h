
 /* 
  *
  * author: ys
  * 
  * a library contains some funtions and struct 
  * to open a specific text file 
  * and manipulate the string stream
  * 
  * int open_files(char*); 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  * 
  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// 个人定义的buffer 循环的
#include"buffer.h"

/************
 * 
 * data struct defination
 * 
 ************/


/* 
struct line_base_string_obj is an object have a pointer pointing to char*
and a mothed to search specific keyword return the line number
 */
struct line_base_string_obj;
typedef struct line_base_string_obj line_string;
typedef line_string* ptr_line;

/* fp to a function that call by point and return size_t i  */
typedef size_t (*fp_s)(ptr_line);

/* struct line_base_string_obj must be initilized and allocate
   a function to it 
 */
int line_string_init(line_string**);



/*
struct str_node is a single linked list node
contains struct line_base_string_obj and a 
pointer to point the next node
 */
struct str_node;
typedef struct str_node* ptr_snode;
  


/*
files object have mothed and data 
 */
struct text_line_base;
typedef struct text_line_base Text;

typedef size_t (*fp_txt)(Text* self);



/*
 * struct thread_packet
 * passing a struct thread_packet to thread
 * buffer address
 * path to open and fill buffer
 */
struct thread_packet;
typedef struct thread_packet buff_info;




/********************
 * 
 * IMPLEMENT
 * 
 *******************/


struct line_base_string_obj{
        char* str;
        fp_s searching;

};




struct thread_packet{
        Buffer* buf;
        char* mode;
        char* path;
};







void* open_text (void* packet) {

        buff_info* tmp = (buff_info*)packet;
        
        Buffer* buffer = tmp->buf;
        buffer_queue * in = &(buffer->in);
        const buffer_queue * const out = &(buffer->out);



        char* path = tmp->path;
        char* mode = tmp->mode;
        

	FILE * files;
	if ( (files = fopen(path,mode)) == NULL) {
		perror("can't open files \n");
		exit(1);
        }

        fill_buffer(files,in, out);

}


int open_txt_line();



size_t counting_alp(FILE* file){
        size_t numb = 0;
        char c;

        while ( (c = fgetc(file)) != '\n') {
                numb++;
        }

        fseek(file, -numb, SEEK_CUR);
        return numb;
}



/* fill buffer_cycle unstop check  buffer isn't fillfull 
   then fill it in thread 
   int fill_buffer(FILE* files,buffer_queue* in, const buffer_queue* const out)
   */
int fill_buffer(FILE* file, buffer_queue* in, const buffer_queue* const out){
        char tmp;
        while (1)
        {
                while ((*in)->next != (*out))
                {
                        for( size_t i = 0; i < 1024; i++){
                                tmp = fgetc(file);
                                (*in)->buf[i] = tmp;
                        }

                        (*in) = (*in)->next;
                }
                
        }
        
}




