#include<stdio.h>
int fact(int n);
int main()
{
	int result,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	result = fact(n);
	printf("The factorial of %d is %d", n,result);
}

int fact(int n)
{
	int i,p,fact = 1;
	for(i=n;i>0;i--)
	fact = fact*i;
	return (fact);
}

