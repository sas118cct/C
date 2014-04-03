#include<stdio.h>
int main()
{
	float r,p;
	printf("Enter the price of an item :\n");
	scanf("%f", &r);
	p = (r*100);
	printf("The price of an item is %fpaise", p);
	return 0;
}

