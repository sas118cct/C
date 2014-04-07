#include<stdio.h>
int main()
{
	int n,r,q = 1,p = 1,i;
	char a[100];
	printf("Enter the string");
	scanf("%s", a);
	n =  strlen(a);
	for(i=n;i>=1;i--){
		p = p*i;
	}
	q = p/(p);
	printf("The n combinations of a string of n charecters is %d", q);
	return 0;
}

