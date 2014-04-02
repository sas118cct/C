#include<stdio.h>
int main()
{
	int  r,n,p,x,k,i,j;
	char a[100];
	printf("Enter the string");
	scanf("%s", a);
	n = strlen(a);
	printf("Enter r\n");
	scanf("%d", &r);	
	k = (n-r); x =1;
	for(i=n,j=k;i>=1,j>=1;i--,j--){
	r = x*i/j;
	}
	printf("The r combinations of a given string are %d ", r);
	return 0;
}
