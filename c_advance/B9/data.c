
/*
 *
 * 
 * struct lives_info defination
 * 
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include<pthread.h>
#include<semaphore.h>

#include"data.h"



int init_life(Life* self) {
        //(*self)->mtx = PTHREAD_MUTEX_INITIALIZER;
        (*self) = (Life)calloc(1, sizeof(life));
        


        pthread_mutex_init(&((*self)->mtx),NULL);
        sem_init(&((*self)->sem), 0 ,MAX_THREAD_ACCESS);
        sem_init(&(*self)->fresh_sem,0,0);
        sem_init(&(*self)->begin_fresh,0,0);


        (*self)->close_input = 0; 
        (*self)->finished = false; 
        (*self)->x = ROW / 2; 
        (*self)->y = COL / 2; 

        (*self)->fram_per_sencond = FRAM;
        

        // initilize func
        (*self)->kill_all_live = _kill_all_lives;
        (*self)->mtx_lock = _mtx_lock;
        (*self)->mtx_unlock = _mtx_unlock;

        (*self)->sem_p = _sem_p;
        (*self)->sem_v = _sem_v;

        (*self)->set_finish = _set_finish;
        (*self)->set_live = _set_live;
        (*self)->set_dead = _set_dead;
        (*self)->set_course_pos = _set_course_pos;

        (*self)->kill_all_live(*self);

        //(*self)->lives = {DEAD};
        return EXIT_SUCCESS;
}

int destory_life(Life* self) {
        
        sem_destroy( &((*self)->sem));
        sem_destroy(&(*self)->fresh_sem);
        sem_destroy(&(*self)->begin_fresh);
        pthread_mutex_destroy( &((*self)->mtx ) );
        if(!(*self))
                free(*self);
}


int _kill_all_lives(Life self){
        for (size_t i = 0; i < ROW; i++)
        {
                for (size_t j = 0; j < COL; j++)
                {
                        self->lives[i][j] = DEAD;
                }
                
                /* code */
        }
        
}



int _sem_p(Life self){
        sem_wait( &(self->sem));
        return EXIT_SUCCESS;
}

int _sem_v(Life self){
        sem_post( &(self->sem) );
        return EXIT_SUCCESS;
}



int _mtx_lock(Life self){
        self->sem_p(self);
        pthread_mutex_lock( &(self->mtx) );
        self->sem_v(self);
        return EXIT_SUCCESS;
}


int _mtx_unlock(Life self){
        self->sem_p(self);
        pthread_mutex_unlock( &(self->mtx) );
        self->sem_v(self);
        return EXIT_SUCCESS;
}

int _set_finish(Life self) {
        self->sem_p(self);
        self->finished = true;
        self->sem_v(self);
        return EXIT_SUCCESS;
}

int _set_live(Life self, size_t x, size_t y) {
        self->sem_p(self);
        LIVE_CONTAINER (*mtrix)[COL] = self->lives;
        mtrix[x][y] = LIVE;
        self->sem_v(self);
        return EXIT_SUCCESS;
}

int _set_dead(Life self, size_t x, size_t y) {
        self->sem_p(self);
        LIVE_CONTAINER (*mtrix)[COL] = self->lives;
        mtrix[x][y] = DEAD;
        self->sem_v(self);
        return EXIT_SUCCESS;
}

int _set_course_pos( Life self, size_t x, size_t y) {
        self->sem_p(self);
        self->x = x;
        self->y = y;
        self->sem_v(self);

        return EXIT_SUCCESS;
}





