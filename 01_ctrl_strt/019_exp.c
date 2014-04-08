#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i,j,sum = 0,b=1,a;
	printf("Enter the numbers n and x");
	scanf("%d %d", &n, &x);
	for(i=0;i<=n;i++){
		a = pow(x,i);
		b = i*b;
		sum = sum +(a/b);
	}	
	printf("The exponential series sum \n");
	printf("1+x+x^/2!+.. is \n");
	printf("%d", sum);
	return 0;
}

