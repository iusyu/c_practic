#include<stdlib.h>




// 大写首字母的都是指针

#ifndef __OBLINKEDLIST__
#define __OBLINKEDLIST__

#define FAIL -1
#define SUCEE 0

typedef void* Data;

struct dnode;
typedef struct dnote dNote;
typedef struct dnote* ptrToNode;
typedef dNote* List;
struct dnote{
	Data info;
	ptrToNode next;
};

struct list;
typedef struct list olist; // oop设计的linked list 
//typedef struct list* OList;

/* 自定义结构的比较函数*/
typedef int (*compare)(void* , void*);
/* 自定义销毁数据结构的detor */
typedef int (*detor)(Data);


typedef int (*modify_add)(olist*, Data);
typedef int (*modify_add_nth)(olist*, Data, size_t);
typedef Data (*access_fn)(olist* , size_t);
typedef int (*modify_de)(olist* , Data, compare, detor);



typedef struct ite{
	ptrToNode head;
	ptrToNode tail;

} iterator;

typedef iterator (*return_itr_info)(olist*);





int Get_olist(olist** self);
int Destory_olist(olist** self, detor destory);


int _delete(olist* self, Data d, compare comp, detor destory);
int _add_back(olist* self,Data d);
int _add_front(olist* self, Data d);

// 一些操作链表中元素的小工具
void forward_pointer(ptrToNode* ptr);
Data delete_node(ptrToNode prev, ptrToNode curr);
int add(ptrToNode pos, Data d);




/*
 * olist对象的定义
 *
 */
struct list{
	size_t size;
	ptrToNode head;
	ptrToNode tail;
	modify_add add_front, add_back;
	modify_de deletee;
	return_itr_info get_iter;

};


#endif /*  __OBLINKEDLIST__ */
