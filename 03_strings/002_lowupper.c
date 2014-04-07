#include<stdio.h>
int main()
{
	char s[10], i;
	printf("Enter any string in lower case");
	scanf("%s", s);
	for(i=0;i<10&&s[i]!='\0';i++){
		s[i] = s[i]-32;
	}
	printf("%s\n", s);
}

