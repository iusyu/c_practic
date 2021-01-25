#include<stdio.h>

#include<stdlib.h>


// 库 提供许多基础高频函数

//


// 数据结构采用array[persion]
// 如若需要添加人数，则使用链表添加然后写入文件末尾，再排列；

#define MAN 1
#define FEMAL 0



// 定义了出生年月的结构
typedef struct born_date{
	size_t year;
	size_t month;
	size_t day;
} born_date;

// 定义了学生详情信息的表格
typedef struct stu{
	char* xuehao;
	char* name;
	size_t age;
	
	born_date bornd;
	bool sex;
	char* address;
	char* phone;
	char* email;
} stu_info;

// 初始化方法 和访问方法 销毁方法！！！！！
int init_stu_info(stu_info* p);
int destory_stu_info(stu_info* p);





/*
 *
 * 管理员的结构
 *
 */

typedef struct manage{
	char userId[32];
	char pwd[16];
} manage_user;

/*
 * 学生登陆结构
 *
 */

typedef struct stu_login{
	char pwd[16];
	char stu_name[32];
} stu_login_info;



/*** 读取文件学生信息生成程序内数据模块*/
stu_info* read_stu_info(const char* const path);



//全局数据 包含多少学生
typedef struct overall_info{
	size_t how_much_stu;
	size_t how_much_manage_usr;
	size_t how_much_signed_stu;
	manage_user suser;
} overall_info_super;








