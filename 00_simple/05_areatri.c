#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,s,area;
	printf("Enter the lengths of sides\n");
	scanf("%f %f %f", &a, &b, &c);
	s = a+b+c;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is %d\n\n", area);
	return 0;
}


