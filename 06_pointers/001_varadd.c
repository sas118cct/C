#include<stdio.h>
int main()
{
	int i, *ptr1 = &i;
	char c, *ptr2 = &c;	
	float f, *ptr3 = &f;
	double d, *ptr4 = &d;
	i = 10; c = 'A'; f = 10.5; d = 11.6;
	printf("The address of i:%d is %p. value:%d\n", i, &ptr1, *ptr1);
	printf("The addres of c:%c is %p. value:%c\n", c, &ptr2, *ptr2);
	printf("The address of f:%f is %p. value:%f\n", f, &ptr3, *ptr3);
	printf("The address of d:%f is %p. value:%f\n", d, &ptr4, *ptr4) ;
	return 0;
}

