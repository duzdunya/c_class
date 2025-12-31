#include <stdio.h>
#include <stdlib.h>
#define MAX 64
#define DEF_CON ((Container){.w=10,.h=10,.d=1})

typedef struct {
	int w;
	int h;
	int d;
} Container;

int main()
{
	Container first = DEF_CON;
	printf("first: %d %d %d\n",first.w,first.h,first.d);

	Container* second = malloc(sizeof(Container)*1);
	*second = DEF_CON;
	printf("second: %d %d %d\n",second->w,second->h,second->d);
	free(second);

	int *x = malloc(sizeof(int));
	*x = 30;
	printf("x: %d\n",*x);
	return 0;
}



