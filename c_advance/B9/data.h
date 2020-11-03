

/*
 *
 * this file declare the data struct of live
 * 
 * 
 * 
 */

#include<pthread.h>
#include<stdbool.h>
//#include<sys/sem.h>
#include<semaphore.h>


#ifndef __DATA
#define __DATA


#define MAX 20
#define ROW MAX
#define COL MAX                   // clum and row deine number
#define BOUND 0


#define BORN_COND 5               // a live was born condition EX. there have 4 lives around so was born
#define LIVE 1
#define DEAD 0

#define LIVE_CONTAINER int

#define QUIT 'q'
#define BORN 'b'
#define BEGIN '\n'
#define UP 'w'
#define DOWN 's'
#define RIGHT 'd'
#define LIFT 'a'

#define FRAM 1


#define MAX_THREAD_ACCESS 1        // semphore Number



struct lives_info;                // info of life env pasing to thread and thread access
typedef struct lives_info life;
typedef struct lives_info* Life;
typedef int (*fp)(Life);
typedef int (*fp1)(Life, size_t, size_t);


struct lives_info {

        
        pthread_mutex_t mtx;
        
        // flag 管道？？？ 实现？？
        sem_t sem;
        sem_t fresh_sem;
        sem_t begin_fresh;

        bool finished;
        LIVE_CONTAINER lives[ROW][COL];

        char close_input;
        
        // couser position
        int x;
        int y;

        int fram_per_sencond;


        // method
        fp mtx_lock, mtx_unlock;
        fp sem_p, sem_v; // P V 

        fp kill_all_live;

        fp set_finish;

        fp1 set_live, set_dead;

        fp1 set_course_pos;
};


// macro initilizer of struct lives_info
#define LIFE_INITILIZER { \
        .mtx = PTHREAD_MUTEX_INITIALIZER \
        .finished = false,\
        .lives = {DEAD},  \
        .close_input = 0, \
        .x = ROW / 2,     \
        .y = COL / 2,     \
        .fram_per_second = FRAM \
}





/* @brief init the struct lives_info 
 * 
 * @return EXIT_SUCCESS if OK
 */
int init_life(Life* self);


/* @brief destory object of Life
 * 
 * @return EXIST_SUCCESS if OK 
 */
int destory_life(Life* self);

int _kill_all_lives(Life self);

/* @brief lock mtx
 *
 * 
 */
int _mtx_lock(Life self);
int _mtx_unlock(Life self);


int _sem_p(Life self);
int _sem_v(Life self);

int _set_finish(Life self);

/* set_live set_dead function */
int _set_live(Life self, size_t x, size_t y);
int _set_dead(Life self, size_t x, size_t y);

int _set_course_pos(Life self, size_t x, size_t y);



struct cordin; // cordinate xy


enum state { dead, live };  // the state of live

#endif  /*  end of __DATA */


