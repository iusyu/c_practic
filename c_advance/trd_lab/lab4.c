#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<termios.h>
#include<pthread.h>



#define MAX 100
#define ROW MAX
#define COL MAX



int main(void) {
        
        //char* str = {"this is lin eo apl in line"};
        char* str1 = {"bufferdeadf"};
        char* str2 = {"this monthe of end"};
        char* str3 = {"julyde idnaidfad"};

        char str[MAX];


        struct termios initialsetting, newrsettings;

        tcgetattr(fileno(stdin), &initialsetting);
        newrsettings = initialsetting;
        newrsettings.c_lflag &= ~ECHO;

        printf("input someth ::: \n");

        if (tcsetattr(fileno(stdin),TCSANOW, &initialsetting)){
                fprintf(stderr, "could no set attr");
        } else {
                fgets(str,10,stdin);
                tcsetattr(fileno(stdin),TCSANOW,&initialsetting);
                fprintf(stdout,"\n you enter the :::",str);
        }


        return EXIT_SUCCESS;
}


