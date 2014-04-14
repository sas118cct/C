#include<stdio.h>
void fact(void);
int result ,n;
int main()
{
	printf("Enter n value\n");
	scanf("%d", &n);
	printf("The factorial of %d is %d\n", n,result);
}
void fact(void)
{
	int i,result = 1;
	for(i=n;i>0;i--)
		result = result*i;

}

