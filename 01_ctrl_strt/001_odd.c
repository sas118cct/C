#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any number");
	scanf("%d", &a);
	b = a%2;
	if(b == 0){
	printf("The given numbr is even");
	}
	else{
	printf("The given numbr is not even");
	}
	return 0;
}

