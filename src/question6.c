#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 64

typedef struct {
	char name[MAX];
	int age;
	char* readed_books[3];
} Person;

void printPerson(Person* x){
	printf("İsim: %s\n",x->name);
	printf("Yaş: %d\n",x->age);
	printf("Okunan kitaplar:\n");
	for (int i=0; i<3; i++){
		printf("%d-%s\n",i,x->readed_books[i]);
		}
}

int main(){
	Person* someone = malloc(sizeof(Person)*1);
	char* readed[3] = {"Küçük Prens","Ateşten Gömlek","International Business"};
	int age = 21;
	memcpy(&someone->name,"ali",sizeof(char)*3);
	memcpy(&someone->age,&age,sizeof(int));
	memcpy(&someone->readed_books, readed, sizeof(readed));

//	someone->readed_books[0] = "Küçük Prens";
//	someone->readed_books[1] = "Ateşten Gömlek";
//	someone->readed_books[2] = "Internation Business";
	
	printPerson(someone);
	free(someone);
	someone = NULL;
	return 0;
}
