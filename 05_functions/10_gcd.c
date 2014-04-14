#include<stdio.h>

int gcd(int, int);
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d %d", &a,&b);
	printf("The gcd is %d", gcd(a,b));	
	return 0;
}

int gcd(int a, int b)
{
	while(a!=b){
		if(a>b){
			return gcd(a-b,b);
		}
		else{
			return gcd(a,b-a);
		}
	}
	return a;
}
