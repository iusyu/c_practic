#include"stu_info.h"
#include"stu_database.h"


#include<pthread.h>
#include<semaphore.h>


#ifndef __INFO_CENTER_H
#define __INFO_CENTER_H

/* 最大的读取访问线程 */
#define MAXREADER 20
/* 写互斥 */
#define MAXWRITER 1



/**
 * 定义了 用于各线程之间交流的数据结构
 *
 */

typedef struct _info_center{
	all_stu_info database;
	
	/* 多个线程写互斥 */
	sem_t write_mutex;
	/* 限制读线程 */
	sem_t read_mem; 


}info_center;


/**
 * info_center init
 *
 */

int icentr_init(info_center* ic);

/**
 * destory info_center 
 * @paramter none
 * @return int
 */

int icenter_destory(info_center* ic);



#endif /* __INFO_CENTER_H */

