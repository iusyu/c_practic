#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<threads.h>


int print_thread(void* str){

        for (size_t i = 0; i < 10000; i++)
        {
                /* code */
        }
        
        printf("%s \n",(char*)str);

        return EXIT_SUCCESS;        
}

int main(void) {
        
        char* str = {"this is lin eo apl in line"};
        char* str1 = {"bufferdeadf"};
        char* str2 = {"this monthe of end"};
        char* str3 = {"julyde idnaidfad"};

        int res[4] = {0};

        thrd_t threads[4];
        thrd_create(&threads[0],print_thread,str);
        thrd_create(&threads[1],print_thread,str);
        thrd_create(&threads[2],print_thread,str);
        thrd_create(&threads[3],print_thread,str);



        thrd_join(threads[0], &res[0]);
        thrd_join(threads[1], &res[1]);
        thrd_join(threads[2], &res[2]);
        thrd_join(threads[3], &res[3]);

        return EXIT_SUCCESS;
}


