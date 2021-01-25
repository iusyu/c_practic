#include"info_center.h"


int icentr_init(info_center* ic) {
	InitStuInfo(&ic->database);
	sem_init(& ic->write_mutex,1, MAXWRITER);
	sem_init(&ic->read_mem, 1, MAXREADER);
	
	return EXIT_SUCCESS;
}


int icenter_destory(info_center* ic){
	DestoryStuInfo(& ic->database);
	sem_destroy(& ic->write_mutex);
	sem_destroy(& ic->read_mem);
	return EXIT_SUCCESS;
}




