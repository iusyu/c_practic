#include<stdio.h>
#include<stdlib.h>


#include<sys/types.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.h>
#include<pthread.h>
#include<sys/sysinfo.h>

#define MAX 100000000

typedef long long Data;

typedef struct _eara{
	void *base;
	size_t nmem;
	size_t size;
}eara;

int compp(const void *a, const void *b){
	return *((int*)a) > *((int*)b);
}


void* my_thread(void * data) {
	eara *dd = data;
	qsort(dd->base, dd->nmem, dd->size, compp);
	return data;
}


void *merge(void *date){
	
}


int main(int argc, char *argv[])
{
	Data *src = calloc(MAX, sizeof(Data));
	Data *src1 = calloc(MAX, sizeof(Data));
	srand(time(NULL));
	for( size_t i = 0; i < MAX; i++ ){
		src[i] = rand() % MAX;	
	}
	
	clock_t t1 = clock();

	int thread_num = get_nprocs();
	
	printf("This computer has %d core to paralle runing. \n", thread_num);
	Data offsize = MAX / thread_num;
	Data mod = MAX % thread_num;
	eara datasplit[thread_num+1];

	for( size_t o = 0; o< thread_num; o++){
		datasplit[o].base = &src[0+ offsize*o];
		datasplit[o].size = sizeof(Data);
		datasplit[o].nmem = offsize;
	}
	
	datasplit[thread_num].base = &src[0+offsize*thread_num];
	datasplit[thread_num].nmem = mod;
	datasplit[thread_num].size = sizeof(Data);
	
	

	

	pthread_t pd[thread_num+1];

	for( size_t i = 0; i < thread_num +1; i++){
		pthread_create( &pd[i], NULL, my_thread,&datasplit[i]);
	}

	void* result[thread_num+1];

	for( size_t i = 0; i < thread_num+1; i++){
		pthread_join(pd[i], &result[i]);
	}
	
	int merge_way[thread_num];


	t1 = clock() -t1;
	
	free(src);
	printf(" paralle time consumpution: %f \n", (float)t1 / CLOCKS_PER_SEC ); 
	

	for( size_t i = 0; i < MAX; i++ ){
		src1[i] = rand() & MAX;
	}
	
	clock_t t2 = clock();
	qsort(src1, MAX, sizeof(Data), compp);
	t2 = clock() - t2;
	free(src1);
	printf("No paralle time consumpution: %f \n", (float)t2 / CLOCKS_PER_SEC ); 

	return 0;
}




