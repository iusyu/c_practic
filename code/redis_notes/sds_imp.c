/**
 * SDS 动态字符串的实现
 * SDS是redis中的 
 *
 *
 *
 */
#include<stdio.h>
#include<stdlib.h>



struct _sds {
	size_t len;
	size_t sfree;
	char* buff;
};


typedef struct _sds sds;

/* 从c string中创建 sds */
sds sdsnew(char*);
/* 创建空sds */
sds sdsempty();


int sdscat( sds *s, char*);

sds sdsnew(char* str) {
	sds tmp;
	tmp.buff = calloc(strlen(str)+1,1);
	tmp.len = strlen(str)+1;
	tmp.sfree = 0;
	return tmp;
}



int sdscat(sds *s, char* str) {
	
}

