#include<stdio.h>
#include<string.h>
int main()
{
	int x,n,r,p;
	char s1[100];
	printf("Enter the string");
	scanf("%s", s1);
	x = 1;
	n = strlen(s1);
	for(p=n;p>=1;p--){
		x = x*p;
	}
	printf("Permutations of N charecters of a string is %d ", x);
 }

