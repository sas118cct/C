#include<stdio.h>
int main()
{
	int s[10],i;
	printf("Enter any string in upper case\n");
	scanf("%s", s[10]);
	printf("The string in lower case is :\n\n");
	for(i=0;i<=10;i++){
		s[i] = s[i]+32;
	}
	printf("%s", s);
	return 0;
}
	
