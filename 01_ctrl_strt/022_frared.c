#include<stdio.h>
int main()
{
	int a,b,c,i,d;
	printf("Enter numerator and denominator ");
	scanf("%d %d", &a, &b);
	for(i=1;i<=a,i<=b;i++){
		if((a%i==0) && (b%i==0)){
			c = a/i;
			d = b/i;
			a = c;
			b = d;
		}
	}
	printf("The numerator is %d  and denominator is %d", c,d);
	return 0;
}

