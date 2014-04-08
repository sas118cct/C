#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,sum=0,n,i,j,x,b=1;	
	printf("Enter the value of n and x\n");
	scanf("%d %d", &n,&x);
	for(i=0,j=0;i<=n;i++,j++){
		if((i%2)==0){
			a = pow((-1),j)*pow(x,i);
			b = i*b;
			sum = sum+(a/b);
		} 
	printf("The sum of the computed cosine series is \n");
	printf("x-x^3/3!+...\n");
	printf("%d", sum);
	}
	return 0;
}
	
