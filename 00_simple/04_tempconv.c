#include<stdio.h>
int main()
{
	int c,f,a,b;
	printf("Enter the temperature in centigrade");
	scanf("%d", &c);
	a = (9*c)/5;
	b = 32;
	f = a+b;
	printf("The temperatutre in fareinheit is %d",f);
	return 0;
}



