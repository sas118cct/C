#include<stdio.h>

int main()
{
	int i,*ptr1 = &i;
	char c, *ptr2 = &c;
	float f,*ptr3 = &f;
	double d,*ptr4 = &d;
	printf("Size of i is %d and Size of ptr1 is %d\n", sizeof(i), sizeof(ptr1));
	printf("Size of c is %d and Size of ptr2 is %d\n", sizeof(c), sizeof(ptr2));
	printf("Size of f is %d and Size of ptr3 is %d\n", sizeof(f), sizeof(ptr3));
	printf("Size of d is %d and Size of ptr4 is %d\n", sizeof(d), sizeof(ptr4));
	return 0;
}
