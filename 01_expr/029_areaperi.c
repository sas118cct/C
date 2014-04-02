#include<stdio.h>
int main()
{
	float l,b,a,p;
	printf("enter length and breadth");
	scanf("%f  %f", &l,&b);
	p = (l+l)*(b+b);
	a = l*b;
	printf("The area of a rectangle is %f\n ",a);
	printf("The perimetre is %f", p);
	return 0;
}

