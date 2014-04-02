#include<stdio.h>
int main()
{
	int test1,test2,test3,a;
	printf("Give the marks of three tests");
	scanf("%d %d %d", &test1, &test2, &test3);
	a = (test1+test2+test3)/3;
	if(a<35)
	{
	printf("The student has failed");
	}
	else if(a>=35 && a<=50)
	{
	printf("Third class");
	}
	else if(a>50 && a<=70)
	{
	printf("Second class");
	}
	else
	{
	printf("First class");
	}
	return 0;
}

