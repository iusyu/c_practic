#include<stdio.h>
#include<string.h>
#include<stdlib.h>



struct book{
	char* name;
	double price;
};

#define BUFFSIZE 1024

typedef struct book Book;


static size_t how_muchBook = 0;


Book* read_file(const char* path){
	FILE* fp = fopen(path,"r");
	if(fp == NULL){
		printf(" open files failed!!!");
		exit(EXIT_FAILURE);
	}
	char tmp;
	char buffer[BUFFSIZE];
	
	int i = 0;
	int tmp_number = 0;
	double tmp_d = 0;
	fscanf(fp,"Number:%d", &tmp_number);
	how_muchBook = tmp_number;
	printf("there have %d books.\n",tmp_number);
	Book* books = (Book*)calloc(tmp_number,sizeof(Book));
	for(int r = 0; r<tmp_number;r++){
		fscanf(fp, "%s %lf", buffer, &(books[r].price));
		books[r].name = (char*)calloc(strlen(buffer)+1, sizeof(char));
		memcpy(books[r].name,buffer,strlen(buffer)+1);
		printf("read from files: %s : %lf \n", books[r].name, books[r].price);
	}
	
	fclose(fp);
	if(books != NULL)
		return books;

	return NULL;

}


void write_file(const char* path, Book* bk){
	FILE* fp = fopen(path, "w");
	fprintf(fp,"Number:%d\n",(int)how_muchBook);
	for(size_t i =0; i<how_muchBook; i++){
		fprintf(fp,"%s %lf\n",bk[i].name, bk[i].price);
	}

	fclose(fp);

}





void free_books(Book* bk){
	if(bk == NULL){
		perror("this NULL pointer \n");
		exit(EXIT_FAILURE);
	}

	for(size_t i=0; i< how_muchBook; i++){
		free(bk[i].name);
	}

	free(bk);
}

int comppp(const void* a, const void* b){
	const Book* tmpa = a;
	const Book* tmpb = b;
	return tmpa->price < tmpb->price;
}



int main(int argc, char *argv[])
{
	Book* tmp = read_file("info.txt");
	
	qsort(tmp,how_muchBook, sizeof(Book),comppp); 
	write_file("sorted_info.txt", tmp);
	Book* sorted_info = read_file("sorted_info.txt");
	free_books(sorted_info);
	free_books(tmp);
	return 0;
}





