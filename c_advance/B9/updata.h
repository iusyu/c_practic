#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

#include"data.h"


#ifndef __UPDATE
#define __UPDATE


/**
 ** @brief update the live state in thread
 **
 **/
void* life_update(void*pkg);

size_t update(Life pkg);

/**
 ** @brief recursely refresh the mixtix of live
 ** 
 ** @return nonsense
 **/
int recur_fresh( Life lv, size_t x, size_t y);




/**
 ** @brief judge x,y life isn't allow to be kill
 **
 **/
int dead_or_live(LIVE_CONTAINER (*env)[COL], size_t x, size_t y);


/** @brief counting around lives
 **
 **
 **/
int accounting_lives_around(LIVE_CONTAINER (*mtrix)[COL], size_t x, size_t y);



#endif // __UPDATE


