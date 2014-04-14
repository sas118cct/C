#include<stdio.h>

int main()
{
	int a,b,c,s,area;
	printf("Enter the lengths of sides\n");
	scanf("%d %d %d", &a, &b, &c);
	s = a+b+c;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is %d\n\n", area);
	return 0;
}


