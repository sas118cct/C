#include<stdio.h>
int fact(int x);
int main()
{
	int n,r,p1,p2,p3;
	printf("Enter the values of n and r ");
	scanf("%d %d", &n,&r);
	p1 = fact(n);
	p2 = fact(r);
	p3 = fact(n-r);
	printf("The value of ncr is %d", p1/(p2*p3));
	printf("The value of npr is %d", p1/p2);
}

int fact(int x)
{
	int i,fact =1;
	for(i=x;i>0;i--)
	fact = fact*i;
	return (fact);
}

