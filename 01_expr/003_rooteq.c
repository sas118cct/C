#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,r1,r2,t;
	printf("Enter the values of a,b,c");
	scanf("%d %d %d", &a,&b,&c);
	t = Sqrt(b*b-4*a*c);
	r1 = (-b+t)/(2*a);
	r2 = (-b-t)/(2*a);
	printf("The quadratic roots are %d %d", r1,r2);
	return 0;
}

