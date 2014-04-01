#include<stdio.h>
#include<math.h>
int main()
{
	float rad,deg,a;
	printf("Enter the number in radiants");
	scanf("%5.2f", &rad);
	a = (180/3.14);
	deg = rad*a;
	printf("The value in degrees is %5.2f",deg);
	return 0;
}
