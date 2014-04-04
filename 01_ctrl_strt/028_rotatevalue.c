#include<stdio.h>
int main()
{
	int a,x = 10,y= 5,z = 6;
	a = x;
	x = y;
	y = z;
	z = a;
	printf("x:%d  y:%d  z:%d", x,y,z);
	return 0;
}
