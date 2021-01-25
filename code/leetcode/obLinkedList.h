#include<stdlib.h>




// 大写首字母的都是指针

#ifndef __OBLINKEDLIST__
#define __OBLINKEDLIST__

typedef void* Data;

struct dnode;
typedef struct dnote dNote;
typedef struct dnote* ptrToNode;
typedef dNote* List;

struct list;
typedef struct list olist; // oop设计的linked list 
typedef struct list* OList;


typedef int (*modify_fn)(OList, Data);
typedef Data (*access_fn)(olist, size_t);
typedef 













#endif /*  __OBLINKEDLIST__ */






