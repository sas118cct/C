#include<stdio.h>
int main()
{
	char a[100],b[100];
	int s1,s2,k;
	printf("Enter a string\n");
	scanf("%s",&a);
	s2 = a[100];
	s1 = strrev(a);
	k = strcmp(s2,s1);
	if(k==0)
	printf("The string is PALLINDROME");
	else
	printf("NOT PALLINDROME");
	return 0;
}

