#include<stdio.h>
int main()
{
	float c,f,a,b;
	printf("Enter the temperature in centigrade\n");
	scanf("%f", &c);
	a = (9*c)/5;
	b = 32;
	f = a+b;
	printf("The temperatutre in fareinheit is %f\n",f);
	return 0;
}



