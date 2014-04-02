#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int s1,s2;
	printf("Enter a string in lower case;\n");
	scanf("%s",&a[100]);
	s1 = strupr(a);
	printf("The string in upper case is :\n");
	printf("%s",s1);
	return 0;
}

