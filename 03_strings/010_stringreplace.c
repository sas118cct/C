#include<stdio.h>
int main()
{
	char a[20],b[20];
	int i,j;
	printf("Enter the first string\n");
	scanf("%s", a);
	printf("Enter the second string\n");
	scanf("%s", b);
	for(i=5,j=0;j!='\0';i++,j++){
		a[i] = b[j];
	}
		printf("%s", a);
	return 0;
}

