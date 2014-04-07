#include<stdio.h>
int main()
{
	char s[10], i;
	printf("Enter any string in lower case;");
	scanf("%s", s[10]);
	for(i=0;i<=10;i++){
		s[i] = s[i]-32;
	}
	printf("%s", s);
}

