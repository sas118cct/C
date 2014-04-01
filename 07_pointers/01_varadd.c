#include<stdio.h>
int main()
{
	int i, *ptr1 = &i;
	char c, *ptr2 = &c;	
	float f, *ptr3 = &f;
	double d, *ptr4 = &d;
	i = 10; c = 'A'; f = 10.5; d = 11.6;
	printf("The address of %d is %p\n", i,&ptr1);
	printf("Teh addres of %c is %p\n", c,&ptr2);
	printf("The address of %f is %p\n", f,&ptr3);
	printf("The address of %f is %p\n", f,&ptr4);
	return 0;
}

