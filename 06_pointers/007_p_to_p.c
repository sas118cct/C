#include<stdio.h>
int main()
{
	int x,*a, **b;
	x = 10;
	a = &x;
	b = &a;
	printf("The value of x is %d\n", *a);
	printf("The value of x through b is  %d\n\n", **b);
	return 0;
}

