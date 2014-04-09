#include<stdio.h>
#include<string.h>

int main()
{
	char a[20],b[20];
	int s1,s2,k;
	printf("Enter first string\n");
	scanf("%s", a);
	printf("Enter the second string\n");
	scanf("%s", b);
	s1 = a;
	s2 = b;
	k = strcat(s1,s2);
	printf("The concatenated string is \n");
	printf("%s",k);
	return 0;
}

