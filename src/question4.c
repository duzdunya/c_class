#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 64

typedef struct {
	char brand[MAX];
	_Bool winter;
} Wheel;

typedef struct {
	char brand[MAX];
	Wheel* wheels[4];
} Car;

int main(){
	Car* mycar = malloc(sizeof(Car));
	Wheel def_wheel = {.brand="Continental", .winter=true};
	Wheel wheels[] = {def_wheel, def_wheel, def_wheel, def_wheel};
	const char bmw[MAX] = "bmw";

	mempcpy(&mycar->brand, bmw, sizeof(bmw));
	*mycar->wheels = wheels;

	printf("%c\n",(*mycar).brand);
	printf("%c\n",mycar->brand);
	return 0;
}


