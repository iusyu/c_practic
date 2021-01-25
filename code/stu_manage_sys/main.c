#include"stu_database.h"
#include"file_IO.h"


all_stu_info DataBase;

char* dataFilePath = "stu_info.txt";

int main(int argc, char *argv[])
{
	InitStuInfo(&DataBase);
	ReadFile(dataFilePath,&DataBase);
	
	printf("DataBase Is Ready........\n");

	char keyboard;

	printf();




	return 0;
}




