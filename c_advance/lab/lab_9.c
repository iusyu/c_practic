#include<stdio.h>


enum state { dead, live };


int main(void){
        printf("this is live value : %d \n", live);

        enum state peo = live;
        enum state pee = dead;
        printf("this is live value : %d \n", peo);
        printf("this is live value : %d \n", pee);


        return 0;
}


