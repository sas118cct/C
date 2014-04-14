#include<stdio.h>
int main()
{
 	int a,b,rev =0,n;
	printf("Enter any number\n");
	scanf("%d", &n);
	a = n;
	while(a>0){
		b = a%10;
		rev = rev*10+b;
		a = a/10;
	}
	if(rev==n){
	printf("%d is pallindrome\n\n", n);
	}
	else{
	printf("%d is not pallindrome\n\n",n);
	}	
	return 0;
}

