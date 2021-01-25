#include"stu_database.h"


/*
 * 初始化一个总的stu_info 结构方便总管理
 *
 */
int InitStuInfo(all_stu_info* asi){
	asi->how_much_stu = 0;
	return Get_olist(&asi->stu_info_list);
}

/*
 * 向数据结构中添加一个学生信息
 *
 */
int AddStuInfo(all_stu_info* asi, stu_info* person){
	olist* tmp_list = asi->stu_info_list;
	int cond  = tmp_list->add_front(tmp_list, person);
	if( cond == FAIL){
		perror("add person fail");
		return cond;
	}

	asi->how_much_stu++;
	return cond;

}

/*
 * 从数据结构中删除 指定的符合条件( campre() )的学生卡
 * 可以批量删除符合条件的学生卡
 *
 */
int DeleteStuInfo(all_stu_info* asi, stu_info*  stuu_info, compare comp){
	olist* tmp_list = asi->stu_info_list;
	int cond = tmp_list->deletee(tmp_list, stuu_info, comp, clearStuInfo);
	if ( cond == FAIL ){
		return FAIL;
	}
	asi->how_much_stu  = asi->stu_info_list->size;
	return SUCEE;
}

/*
 * 释放学生信息数据库
 *
 */
int DestoryStuInfo(all_stu_info* data_base){
	if(data_base == NULL){
		return FAIL;
	}
	if( Destory_olist(& data_base->stu_info_list, clearStuInfo) ==  FAIL )
		return FAIL ;
	

	return SUCEE;

}
