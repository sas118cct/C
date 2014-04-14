#include<stdio.h>

int fib(int n)

int main()
{
	int result,n,i;
	printf("Enter any number\n");
	scanf("%d", &n)
	for(i=0;i<=n;i++){
		printf("%d", fib(n));
	}
	return 0;
}

int fib(int n)
{
	int p;
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}	
	return ((fib(n-1)+fib(n-2));

}
