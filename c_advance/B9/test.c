#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<termios.h>
#include<pthread.h>

#include"data.h"
#include"input.h"
#include"updata.h"
#include"display.h"

#ifndef MAX 100
#define MAX 100
#endif
#define ROW MAX
#define COL MAX




int main(void) {
        
        //char* str = {"this is lin eo apl in line"};
        char* str1 = {"bufferdeadf"};
        char* str2 = {"this monthe of end"};
        char* str3 = {"julyde idnaidfad"};
        Life lv;
        init_life(&lv);

        pthread_t ptt[3];
        
        pthread_create(&ptt[0], NULL, life_input, (void*)lv);
        pthread_create(&ptt[1], NULL, life_update, (void*)lv);
        pthread_create(&ptt[2], NULL, life_display, (void*)lv);

        pthread_join(ptt[0], NULL);
        pthread_join(ptt[1], NULL);
        pthread_join(ptt[2], NULL);

        destory_life(&lv);

        return EXIT_SUCCESS;
}


