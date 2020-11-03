#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>



#define MAX 100
#define ROW MAX
#define COL MAX



struct share_res;
typedef struct share_res share_res;
int init_share_res( share_res** self );





struct share_res {
        char* str;
        char* something;
};


int init_share_res ( share_res** self){
        *self =(share_res*)calloc(1, sizeof(share_res));
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

struct mixtrix;
typedef struct mixtrix mixtrix;
struct mixtrix {
        int env[ROW][COL];
        char * str;
};

#define MIXTRIX_INITILIZER { \
        .str = '\0',         \
        .env = {0}           \
}


int mixtrix_multi(int env[ROW][COL]){
        env[1][1] = 2;

        return env[1][1];
}



int main(void) {
        
        char* str = {"this is lin eo apl in line"};
        char* str1 = {"bufferdeadf"};
        char* str2 = {"this monthe of end"};
        char* str3 = {"julyde idnaidfad"};

        mixtrix mx = MIXTRIX_INITILIZER;
        mixtrix* pmx = &mx;

        pmx->env[0][0] = 1;

        int (*mxp)[COL] = pmx->env;

        putchar(mixtrix_multi(pmx->env));
        printf("%d \n", pmx->env[0][0]);
        printf("%d \n", mxp[0][99]);

        putchar('\n');


        


        return EXIT_SUCCESS;
}


