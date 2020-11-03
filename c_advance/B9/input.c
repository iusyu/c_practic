#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>



#include"termi.h"
#include"data.h"


void* life_input( void* l) {
        
        Life lv = (Life)l;
        
        while (lv->close_input = getch())
        {
                switch (lv->close_input)
                {
                case UP:
                        if (lv->x-1 >= 0)
                                lv->x--;
                        break;
                case DOWN:
                        if (lv->x+1 < ROW)
                                lv->x++;
                        break;
                case RIGHT:
                        if (lv->y+1 < COL)
                                lv->y++;
                        break;
                case LIFT:
                        if(lv->y-1 >= 0)
                                lv->y--;
                        break;
                case BORN:
                        pthread_mutex_lock( &(lv->mtx));
                        lv->lives[lv->x][lv->y] = LIVE;
                        pthread_mutex_unlock( &(lv->mtx));
                        break;

                case BEGIN:
                        sem_post(&lv->begin_fresh);
                        break;
                case QUIT:
                        lv->finished = true;
                        pthread_exit(NULL);
                        break;
                
                default:
                        break;
                }
        }
        
}




int input_termi() {

}

