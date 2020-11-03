
#include<stdio.h>
#include<stdlib.h>



#include"display.h"


void* life_display( void* l) {
        Life lv = (Life)l;
        while (!(lv->finished))
        {       
                sem_wait(&lv->fresh_sem);
                lv->sem_p(lv);
                display(lv->lives);
                lv->sem_v(lv);
        }
        
}


int display( LIVE_CONTAINER (*mtrix)[COL]) {
        for (size_t i = 0; i < ROW; i++)
        {
                for (size_t j = 0; j < COL; j++)
                {
                        fputs( mtrix[i][j] ? DOT:SPACE, stdout);
                }
                printf("\n");
        }
        
}