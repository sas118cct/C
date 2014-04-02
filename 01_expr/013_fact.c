#include<stdio.h>
int main()
{
	int i,a,fact,n;
	printf("Enter the number");
	scanf("%d", &n); a =n;
	fact = 1;
	while(n>=1){
	fact = n*fact;
	n--;
	}
	printf("The factorial fo %d is %d", a, fact);
	return 0;
}

