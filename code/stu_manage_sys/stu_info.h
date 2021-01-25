/*
 * 学生信息管理模块
 *
 *
 *
 */
#include<stdlib.h>
#include"obLinkedList.h"

#ifndef __STU_INFO_H
#define __STU_INFO_H


//#define FAIL -1
//#define SUCE 0

#define FEMALE 0
#define MALE 1
#define SEX_UNKNOW -10

/*
 * 单个学生相关的数据结构和操作
 *
 */

//年月日的数据结构
typedef struct born{
	size_t year;
	size_t month;
	size_t day;
} born_date;
/* 设置出生年龄的数据 */
void setBornDate(born_date* bn, size_t y, size_t m, size_t d);


// 学生信息数据结构
typedef struct stu{
	char* id;
	char* name;
	size_t age;

	born_date born_info;
	
	int sex;
	char* address;
	char* phone;
	char* email;

} stu_info;

/* 获取一个heap空间然后初始化完成后 返回ptr */
stu_info* getStuInfo(char* idd, char* namee);

/* 清理学生信息node 并释放自己 */
int clearStuInfo(void* data);

/* 初始化stu_info 单个学生的info */
int init_stu_info(stu_info* info);

/* 销毁一个学生的信息，里面包含指针需谨慎 */
int destory_stu_info(stu_info* info);

/* 初始化一个学生信息的info node 然后返回 */
stu_info* getStuInfo(char* idd, char* namee);

/* 填写相关学生的信息 */
void fillStuInfo(stu_info* info, int s, size_t agee, char* add, char* phone, char* email, size_t yy, size_t mm, size_t dd);

#endif /*  __STU_INFO_H */
