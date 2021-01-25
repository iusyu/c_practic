
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#include"file_IO.h"


void conversion_char( char* const resourse, char** dest){
	if( resourse ==  NULL){
		exit(EXIT_FAILURE);
	}

	(*dest) = (char*)calloc(strlen(resourse)+1, sizeof(char));
	memcpy((*dest),resourse, strlen(resourse)+1);

}

int ReadFile(const char* path , all_stu_info* info){
	FILE* fp= fopen(path,"r");
	if(!fp){
		perror(" fopen is fail");
		return FAIL;
	}

	int how;
	fscanf(fp, "StudentsNumber:%d\n", &how);
	char buf_id[BUFFSIZE_INFO] ;
	char buf_name[BUFFSIZE_INFO];
	char buf_sex[BUFFSIZE_INFO];
	char buf_addr[BUFFSIZE_INFO];
	char buf_phone[BUFFSIZE_INFO];
	char buf_mail[BUFFSIZE_INFO];
	char buf_age[BUFFSIZE_INFO];

	char* id;
	char* name;
	int sex;
	char* addr;
	char* phone;
	char* mail;
	char* agee;

	int buf_year = 0;
	int buf_month = 0;
	int buf_day = 0;
	int age;

	for( size_t i = 0; i < how; i++){
		fscanf(fp,"%s %s %d %s %s %s %d %d,%d,%d\n", 
				buf_id, buf_name, &sex, buf_addr, buf_phone, buf_mail,
				&age, &buf_year, &buf_month, &buf_day);
		
		conversion_char(buf_id, &id);
		conversion_char(buf_name, &name);
		// conversion_char(buf_sex, &sex);
		conversion_char(buf_addr, &addr);
		conversion_char(buf_phone, &phone);
		conversion_char(buf_mail, &mail);
		// conversion_char(buf_age, &agee);
		stu_info* person = getStuInfo(id,name);

		fillStuInfo(person, sex , age, addr, phone, mail,buf_year,
				buf_month, buf_day);
		AddStuInfo(info , person);

		
		printf("read: %s %s %d %s %s %s %d %d,%d,%d\n", 
				id, name, sex, addr, phone, mail,
				age, buf_year, buf_month, buf_day);

	}
	fclose(fp);
	return SUCEE;
}


stu_info* input_stu_info(){
	char buf_id[BUFFSIZE_INFO] ;
	char buf_name[BUFFSIZE_INFO];
	char buf_sex[BUFFSIZE_INFO];
	char buf_addr[BUFFSIZE_INFO];
	char buf_phone[BUFFSIZE_INFO];
	char buf_mail[BUFFSIZE_INFO];
	char buf_age[BUFFSIZE_INFO];

	char* id;
	char* name;
	int sex;
	char* addr;
	char* phone;
	char* mail;
	char* agee;

	int buf_year = 0;
	int buf_month = 0;
	int buf_day = 0;
	int age;

	char tmp;
	
	char* print_info[] = {
		[0] = "Please input students ",
		[1] = "ID \n",
		[2] = "Name \n",
		[3] = "Sex \n",
		[4] = "Address \n",
		[5] = "Phone \n",
		[6] = "Email \n",
		[7] = "Age \n",
		[8] = "Years \n",
		[9] = "Month \n",
		[10] ="days \n"
	};

	printf("%s %s : \n", print_info[0], print_info[1]);
	scanf("%s",buf_id);
	
	printf("%s %s : \n", print_info[0], print_info[2]);
	scanf("%s",buf_name);
		
	printf("%s %s : \n", print_info[0], print_info[3]);
	scanf("%d", &sex);
	
	printf("%s %s : \n", print_info[0], print_info[4]);
	scanf("%s",buf_addr);

	printf("%s %s : \n", print_info[0], print_info[5]);
	scanf("%s",buf_phone);

	printf("%s %s : \n", print_info[0], print_info[6]);
	scanf("%s",buf_mail);

	printf("%s %s : \n", print_info[0], print_info[7]);
	scanf("%d", &age);
	
	printf("%s %s : \n", print_info[0], print_info[8]);
	scanf("%d", &buf_year);
	
	printf("%s %s : \n", print_info[0], print_info[9]);
	scanf("%d", &buf_month);
	
	printf("%s %s : \n", print_info[0], print_info[10]);
	scanf("%d", &buf_year);


	conversion_char(buf_id, &id);

	conversion_char(buf_name, &name);
	// conversion_char(buf_sex, &sex);
	conversion_char(buf_addr, &addr);
	conversion_char(buf_phone, &phone);
	conversion_char(buf_mail, &mail);
	// conversion_char(buf_age, &agee);
	stu_info* person = getStuInfo(id,name);

	fillStuInfo(person, sex , age, addr, phone, mail,buf_year,
			buf_month, buf_day);

	printf("read: %s %s %d %s %s %s %d %d,%d,%d\n", 
			id, name, sex, addr, phone, mail,
			age, buf_year, buf_month, buf_day);

	return person;
}


int print_stuInfo_termi(const stu_info* const info){
	if(!info)
		return FAIL;

	static const char* const name = "Name";
	static const char* const id = "Id";
	static const char* const sex = "Sex";
	static const char* const age = "Age";
	static const char* const email = "Email";
	static const char* const phone  = "Phone";
	static const char* const address = "Address";
	static const char* const bornday = "BornDate";
	static const int width = 15;
	static const char aster = '*';
	printf("****************************************\n");
	printf("*%*s  %-s%*c\n", width ,name, info->name,25-((int)strlen(info->name)), aster);
	printf("*%*s  %-s%*c\n", width, id, info->id, 25-((int)strlen(info->id)), aster);

	printf("*%*s  %-d\n", width ,sex, info->sex);
	printf("*%*s  %-u\n", width ,age, info->age);
	printf("*%*s  %-s%*c\n", width ,email, info->email,25-((int)strlen(info->email)), aster);
	printf("*%*s  %-s%*c\n", width ,phone, info->phone,25-((int)strlen(info->phone)), aster);
	printf("*%*s  %-s%*c\n", width ,address, info->address,25-((int)strlen(info->address)), aster);
	printf("*%*s  %-u.%u.%u%*c\n", width ,bornday,info->born_info.year, info->born_info.month,
							info->born_info.day, 10,aster);
	
	return SUCEE;


}


int fprint_stuInfo(FILE* fp, const stu_info* const info){
	return fprintf(fp,"%s %s %u %s %s %s %u %u,%u,%u\n",info->name, info->id, info->sex,
							  info->address, info->phone,info->email, info->age,
							  info->age, info->born_info.year,
							  info->born_info.month,
							  info->born_info.day);
				
}







