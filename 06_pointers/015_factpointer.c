#include<stdio.h>
int p;
int main()
{
	int i,*n = &i,a;
	printf("Enter the value of n\n");
	scanf("%d",&i);
	a = fact(*n);
	printf("The factorial of n is %d", a);
	return 0;
}
int fact(int k)
{
	int i,p=1;
	for(i=1;i<=k;i++)
        p = p*i;
        return p;
}

