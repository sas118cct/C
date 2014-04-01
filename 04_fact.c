#include<stdio.h>
int fact(void);
int n;
int main()
{
	int result;
	printf("Enter the value of n");
	scanf("%d", &n);
	result = fact();
	printf("The factorial of the number %d is %d", n,result);
}

int fact(void)
{
	int i, result = 1;
	for(i=n;i>0;i--)
	result = result*i;
	return (result);
}

