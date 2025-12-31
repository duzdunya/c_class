#include <stdio.h>

typedef struct {
	int x;
	int y;
} Point;

int main(){
	Point one = {.x=15, .y=20};
	Point two = {.x=5, .y=21};
	printf("%d\n",sum(one, two));
	return 0;
}

int sum(Point* a, Point* b){
	return a->x + b->x + a->y + b->y;
}



