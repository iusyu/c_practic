#ifndef _ANIMAL_H
#define _ANIMAL_H

typedef int (*printFunc)(const char*);

typedef struct _animal{
	char* name;
	int weight;

	printFunc get_weight;
} Animal;







#endif /* _ANIMAL_H */
