#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers a,b,c");
	scanf("%d %d %d ", &a,&b,&c);
	if(a>b && b>c)
	{
	printf("The largest number is %d", a);
	}
	else if(b>a && a>c)
	{
	printf("The largest number is %d", b);
	}
	else 
	{
	printf("The largest number is %d",c);
	}
	return 0;
}

