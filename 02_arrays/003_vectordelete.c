#include<stdio.h>
int main()
{
	char p[5];
	printf("Enter any 5 charectered string in the vector");
	scanf("%s",&p);
	printf("Declared array is %s%s%s%s%s",p[0],p[1],p[2],p[3],p[4]);
	p[4] = '\0';
	printf("Array p after deletinf a charechter is %s%s%s%s%s",p[0],p[1],p[2],p[3],p[4]);
	return 0;
}

