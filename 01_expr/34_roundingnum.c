#include<stdio.h>
int main()
{
	int a,b;
	float x;
	printf("Enter a number:\n");
	scanf("%f", &x);
	printf("Smallest integer \t given number\t largest integer");
	a = floor(x);
	b = ceil(x);
	printf("%d \t %f\t %d", a,x,b);	
	return 0;
}

