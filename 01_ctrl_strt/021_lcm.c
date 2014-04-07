#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("Enter the two numbers\n");
	scanf("%d %d", &a,&b);	
	if(a==b){
	printf("%d is the lcm", a);
	}
	else{
	for(i=1;i<=a*b;i++){
		if(i%a==0 && i%b==0 && a*b%i==0)
			printf("%d is the lcm of the given number", i);
		}
	}
	return 0;
}


