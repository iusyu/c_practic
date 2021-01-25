#include<stdio.h>
#include<stdlib.h>


#include"stu_info.h"

#ifndef __STU_DATABASE_H
#define __STU_DATABASE_H



// 所有学生的总数据结构
typedef struct all_info{
	size_t how_much_stu;  // 记录当前数据库中有多少学生数据
	olist* stu_info_list;
	
} all_stu_info;

/* 初始化学生数据库 */
int InitStuInfo(all_stu_info* asi);

/* 向数据库中添加一个学生信息 */
int AddStuInfo(all_stu_info* asi, stu_info* person);

/* 从数据库中删除一个学生信息，或者批量删除 */
int DeleteStuInfo(all_stu_info* asi, stu_info* stuu_info, compare comp);

/* 释放学生信息数据库*/
int DestoryStuInfo(all_stu_info* data_base);

#endif /* __STU_DATABASE_H */
