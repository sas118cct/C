#include<stdio.h>

int main()
{
	int i,*ptr1 = &i;
	char c, *ptr2 = &c;
	float f,*ptr3 = &f;
	double d,*ptr4 = &d;
	printf("Size of i is %p and Size of ptr1 is %p\n\n", sizeof(i), sizeof(ptr1));
	printf("Size of c is %p and Size of ptr2 is %p\n\n", sizeof(c), sizeof(ptr2));
	printf("Size of f is %p and Size of ptr3 is %p\n\n", sizeof(f), sizeof(ptr3));
	printf("Size of d is %p and Size of ptr4 is %p\n\n", sizeof(d), sizeof(ptr4));
	return 0;
}
