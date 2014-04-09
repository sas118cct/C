#include<stdio.h>
#include<string.h>
int main()
{
	int n,p = 1, r,q = 1,i;
	char a[100];
	printf("Enter the string \n");
	scanf("%s", a);
	n = strlen(a);
	printf("Enter the value of r\n");
	scanf("%d", &r);
	for(i=n;i>=1;i--){
		p = p*i;
	}
	for(i=r;i>=1;i--){
		q = q*i;
	}
	printf("The r permutations of a string of n letters is %d", p/q);
	return 0;
}
