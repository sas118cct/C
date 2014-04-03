#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any number\n");
	scanf("%d", &a);
	b = a%2;
	if(b== 0){
	printf("The given number is even\n");
	}
	else{
	printf("The given number is odd");
	}
	return 0;
}
