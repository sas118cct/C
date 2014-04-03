#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the year:");
	scanf("%d", &a);
	b = a%4;
	if(b == 0){
	printf("The given year is a leap year");
	}
	else{
	printf("The given year is not a leap year ");
	}
	return 0;
}

