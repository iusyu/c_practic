
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>


#define LINE '\n'


size_t counting_one_file(const char* files) {


        if(!files)
                exit(1);

        FILE * fp = fopen(files, 'r');
        if(! fp) {
                fprintf(stderr, "open files failed \n");
                exit(1);
        }

        char tmp;

        size_t num = 0;

        while ( (tmp = fgetc(fp)) != EOF )
        {
                if(tmp = LINE)
                        num++;
        }
        fclose(fp);

        printf("%s has %ld lines \n", files, num);

        return num;
        
}






int main(int argc, char const *argv[])
{
        //int each_file[argc+1] = {0};

        size_t line_num = 0;
        printf("Pragram %s\n", argv[0]);
        for ( size_t i = 1; i < argc; i++) {
                line_num += counting_one_file(argv[i]);
                
                //printf("Pragram %s \n", argv[i]);
        }

        printf("Total lines : %ld \n", line_num);
        
        return 0;
}




