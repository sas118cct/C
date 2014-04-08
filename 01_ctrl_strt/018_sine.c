#include<stdio.h>
#include<math.h>
int main()
{
	int a,sum = 0,n,x,i,j,b = 1;
	printf("Enter the value of both n and x\n");
	scanf("%d %d", &n,&x);
	for(i=0,j=0;i<=n;j++,i++){
		if((i%2)==0){
		}
		else{
		a = pow((-1),j)*pow(x,i);
		b = i*b;
		sum = sum +(a/b);
		}
	}
	
	printf("The sum of sine taylor series is \n");
	printf("1-x+x^3/3+...");
	printf("%d", sum);
	return 0;
}
	
