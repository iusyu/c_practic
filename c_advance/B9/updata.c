#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>


#include"updata.h"
#include"data.h"


size_t update (Life pkg) {

        Life lv = pkg;
        
        //bool (*live)[R][C] = lv->lives;

        LIVE_CONTAINER (*mtrixl)[COL] = lv->lives;

        for (size_t i = 0; i < ROW; i++) {
                for (size_t j = 0; j < COL; j++) {
                        if(mtrixl[i][j] == LIVE) {
                                if(dead_or_live(mtrixl,i,j) == DEAD){
                                        //lock mtx
                                        pthread_mutex_lock( &(lv->mtx) );
                                        mtrixl[i][j] = DEAD;
                                        pthread_mutex_unlock( &(lv->mtx) );
                                }
                        } else {
                                if(dead_or_live(mtrixl, i, j) == LIVE ){
                                        pthread_mutex_lock( &(lv->mtx));
                                        mtrixl[i][j] = LIVE;
                                        pthread_mutex_unlock( &(lv->mtx ));
                                }
                        }
                }
        }
}


void* life_update (void* l){

        Life lv = (Life)l;
        

        if(lv->close_input == QUIT){
                pthread_mutex_lock( & (lv->mtx) );
                lv->finished = true;
                pthread_mutex_unlock( &(lv->mtx) );
        }

        sem_wait(&lv->begin_fresh);
        
        while (!(lv->finished)){

                usleep(1000/FRAM);
                update(lv);

                if (lv->close_input == BORN ){
                        pthread_mutex_lock( &(lv->mtx));
                        lv->lives[lv->x][lv->y] = BORN;
                        pthread_mutex_unlock( &(lv->mtx));
                }
                sem_post(&lv->fresh_sem);
        }


}


int dead_or_live(LIVE_CONTAINER (*mtrix)[COL], size_t x, size_t y){
        if( accounting_lives_around(mtrix, x, y) >= BORN_COND)
                return LIVE;
        else {
                return DEAD;
        }
}


int accounting_lives_around(LIVE_CONTAINER (*mtrix)[COL], size_t x, size_t y){
        
        int sum = 0;

        if( x-1 >= 0 && y-1 >= 0)
                sum += mtrix[x-1][y-1];
        if( x+1 < ROW && y+1 < COL)
                sum += mtrix[x+1][y+1];
        if( x-1 >= 0 && y < COL)
                sum += mtrix[x-1][y];
        if( x+1 < ROW && y < COL)
                sum += mtrix[x+1][y];
        if( (x >= 0 && x < ROW) && y-1 >= 0)
                sum += mtrix[x][y-1];
        if( (x >= 0 && x < ROW) && y+1 <= COL)
                sum += mtrix[x][y+1];
        if( (x-1 >= 0) && y+1 < COL)
                sum += mtrix[x-1][y+1];
        if( x+1 < ROW && y-1 >= 0)
                sum += mtrix[x+1][y-1];

        return sum;
        
}