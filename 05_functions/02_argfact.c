#include<stdio.h>
void fact(int n);
int result,n;
int main()
{
	printf("Enter the value of n");
	scanf("%d",&n);
	fact(n);
	printf("The factorial of %d is %d", n,result);
}

void fact(n)
{
	int i;
	result = 1;
	for(i=n;i>0;i--)
	result = result*i;
}

