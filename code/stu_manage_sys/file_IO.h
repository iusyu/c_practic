/*
 *
 * 管理
 *
 *
 */


#include<stdio.h>
#include<stdlib.h>

#include"obLinkedList.h"
#include"stu_info.h"
#include"stu_database.h"

#ifndef __FILE_IO_H
#define __FILE_IO_H



#define BUFFSIZE_INFO 128

/* 把buff中的str转移到 动态内存中 */
void conversion_char(char* const resourse ,  char** dest);

/* 读取文件 然后给数据库 */
int ReadFile(const char* path, all_stu_info* info);

/**
 * 单次从标准io输入
 * @return stu_info* 
 */
stu_info* input_stu_info();

/**
 * 格式化向终端打印学生信息
 *
 */
int print_stuInfo_termi(const stu_info* const info);

/**
 * 格式化向文件输出学生信息
 *
 */
int fprint_stuInfo(FILE* fp,const stu_info* const info);

#endif /* __FILE_IO_H */

