#include <stdio.h>
#include <stdlib.h>
#define MAX 64

void aliHello();
void joeHello();

typedef struct {
	char* name;
	int age;
	void (*hello)(void);
} Person;

int main()
{
	Person* someone = malloc(sizeof(Person)*1);
	someone->name = "ali";
	someone->age = 21;
	someone->hello = aliHello;

	someone->hello();

	free(someone);
	someone = NULL;

	Person another = {.name="joe",.age=30,.hello=joeHello};
	another.hello();

	return 0;
}

void aliHello(){
	printf("Merhaba ismim ali\n");
}

void joeHello(){
	printf("Hi my name is Joe\n");
}
