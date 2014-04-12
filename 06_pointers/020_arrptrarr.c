#include <stdio.h>

int main()
{
	int a[10];
	int (*pta)[10]; // pointer to arry of ints
	int *aop[10];	// array of int pointers
	int i;

	printf("sizeof(pta):%d\n", sizeof(pta));
	printf("sizeof(aop):%d\n", sizeof(aop));

	pta = &a;

	for (i=0; i<10; i++) {
		aop[i] = &a[i];
	}

	printf("&a:%p pta:%p\n", &a, pta);

	for (i=0; i<10; i++) {
		printf("&a[%d]:%p aop[%d]:%p\n", i, &a[i], i, aop[i]);
	}


	return 0;
}
