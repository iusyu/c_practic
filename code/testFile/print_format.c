#include<stdio.h>
#include<stdlib.h>

#define MAXLEN 64

const char* const name = "name";
const char* const id = "ID";





int main(int argc, char *argv[])
{
	FILE* fp = fopen("stu_info.txt","r");
	
	if(!fp){
		perror("file is not opened\n");
		return EXIT_FAILURE;
	}

	char buff_id[MAXLEN];
	char buff_name[MAXLEN];
	int sex;
	char buff_add[MAXLEN];
	char buff_phone[MAXLEN];
	char buff_mail[MAXLEN];
	int age;
	int year;
	int month;
	int days;

	int size=0;









	
	fscanf(fp,"StudentsNumber:%d\n", &size);

	for(size_t i = 0; i<size; i++){
		fscanf(fp, "%s %s %d %s %s %s %d,%d,%d,%d\n", buff_id, buff_name, &sex,
							 buff_add, buff_phone,
							 buff_mail, &age,
							 &year,&month, &days);
		printf("read >>> %s %s %d %s %s %s %d,%d,%d,%d \n",
							 buff_name, buff_id ,
							 sex, buff_phone,
							 buff_mail, buff_add,
							 age, year, month, days);
	}

	fclose(fp);

	printf("***********************************************************\n");
	printf("*%*s",10,name);
	printf("  %-s %*s\n","CHarli",10,"*");

	printf("*%*s %-s",10,name,"chideeedfas");
	printf("%*s\n",40,"*");
	printf("*%*s %-s %*s\n",10,id,"2216013",10,"*");



	return 0;
}






