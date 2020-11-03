#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<termios.h>
#include<pthread.h>
#include<semaphore.h>
#include"data.h"
#include"input.h"

#ifndef MAX 100
#define MAX 100
#define ROW MAX
#define COL MAX




int main(void) {
        
        //char* str = {"this is lin eo apl in line"};
        char* str1 = {"bufferdeadf"};
        char* str2 = {"this monthe of end"};
        char* str3 = {"julyde idnaidfad"};
        life* lv;
        init_life(&lv);

        pthread_t ptt[2];
        
        pthread_create(&ptt[0], NULL, life_input, (void*)*lv);
        pthread_create(&ptt[0], NULL, life_input, (void*)*lv);
        
        while (!(*lv)->finished)
        {
                printf(" x: %d, y: %d \n",(*lv)->x, (*lv)->y);
        }
        
        return EXIT_SUCCESS;
}


