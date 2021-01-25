#include<stdio.h>
#include"stu_info.h"



/*
 * 设定生日
 */
void setBornDate(born_date* bn, size_t y, size_t m, size_t d){
	bn->year = y;
	bn->month = m;
	bn->day = d;
}

/*
 * 填完剩余的信息
 *
 */
void fillStuInfo(stu_info* info, int s, size_t agee, char *add, char *phone, char *email, size_t yy, size_t mm, size_t dd){
	info->sex = s;
	info->age = agee;
	info->address = add;
	info->phone = phone;
	info->email = email;
	setBornDate(&info->born_info, yy,mm,dd);
}

/*
 * 给定信息然后生成一个node返回
 *
 */
stu_info* getStuInfo(char* idd, char* namee){
	if( idd != NULL && namee != NULL){
		perror("info isn't compelte");
		return NULL;
	}
	stu_info* tmp  = NULL;
	if( (tmp = (stu_info*) calloc(1, sizeof(stu_info))) == NULL)
		return tmp;
	tmp->id = idd;
	tmp->name = namee;
	fillStuInfo(tmp, SEX_UNKNOW, 0, NULL, NULL,NULL,0,0,0); 
	return tmp;
}

/*
 * 清理一个数据node 里面指针资源和本指针
 *
 */
int clearStuInfo(void* data){
	stu_info* tmp = (stu_info*)data;
	free(tmp->id);
	free(tmp->name);
	free(tmp->address);
	free(tmp->phone);
	free(tmp->email);
	// 释放完内部元素，然后就释放自己
	free(tmp);

	return SUCEE;
}

