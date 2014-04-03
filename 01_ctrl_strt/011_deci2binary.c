#include<stdio.h>
int main()
{
	int d,i,wt;
	printf("Enter the decimal number ");
	scanf("%d", &d);
	wt = pow(2,31);
	while(d>0) {
	i = d/wt;
	printf("%d",i);	
	d = d%wt;
	wt = wt/2;
	}
	return 0;
}

