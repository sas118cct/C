#include<stdio.h>
#include<math.h>
int main()
{
	int dg,r,a;
	printf("Enter the number in degrees");
	scanf("%d",&dg);
	a = 3.14/180;
	r = dg*a;
	printf("The value in radiants is %d", r);
	return 0;
}

