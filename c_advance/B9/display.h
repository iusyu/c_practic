


#include<stdio.h>
#include<termios.h>
#include<pthread.h>



#include"data.h"





#define DOT "⦿ "
#define SPACE " "
#define WROOK ESC_TBLUE "♖" ESC_NORMAL
#define BROOK ESC_TBLUE "♜" ESC_NORMAL


void* life_display(void* l);

int display( LIVE_CONTAINER (*mtrix)[COL] );





