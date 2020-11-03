#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>


struct share_res;
typedef struct share_res share_res;
int init_share_res( share_res** self );





struct share_res {
        char* str;
        char* something;
};


int init_share_res ( share_res** self){
        *self =(share_res*)calloc(1, sizeof(share_res)));
        if(!(*self))
                return -1;
}

void* print_thread(void* str){

        share_res * res = str;

        for (size_t i = 0; i < 10000; i++)
        {
                /* code */
        }
        
        printf("%s \n",(char*)res->str);

        return EXIT_SUCCESS;        
}

int main(void) {
        
        char* str = {"this is lin eo apl in line"};
        char* str1 = {"bufferdeadf"};
        char* str2 = {"this monthe of end"};
        char* str3 = {"julyde idnaidfad"};
        
        share_res *resource;


        thread_t threads[4];
        pthread_create(&threads[0], NULL, print_thread, (void*)resource );
        

        return EXIT_SUCCESS;
}


