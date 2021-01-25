#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef void* KeyValue;
typedef void (*ValueCpyFunc)(KeyValue* dest, KeyValue* src);
typedef void (*ValueFreeFunc)(KeyValue);


typedef struct kv{
	char* key;
	KeyValue value;
} keyvalue;


keyvalue* keyvalue_new(){
	keyvalue* tmp_ptr = calloc(1, sizeof(keyvalue));
	if(!tmp_ptr) {
		perror("calloc is failed !\n");
		return tmp_ptr;
	}
	return tmp_ptr;
}

void keyvalue_copy(keyvalue** dest, keyvalue* src, ValueCpyFunc cp) {
	*dest = calloc(1, sizeof(keyvalue));
	cp(& ((*dest)->value),src->value);
	(*dest)->key = calloc(strlen(src->key)+1, 1);
	memcpy((*dest)->key, src->key, strlen(src->key)+1);
}

void keyvalue_free(keyvalue* kv, ValueFreeFunc vfree){
	 free(kv->key);
	 vfree(kv->value);

}



