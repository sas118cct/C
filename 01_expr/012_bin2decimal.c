#include<stdio.h>
int main()
{
	int b,a,wt,p,r;
	printf("Enter the binary number");
	scanf("%d", &b);
	p=0;wt = 1;
	while(b>0) {
	r = b%10;
	a = wt*r;		
	wt = wt*2;
	p = p+a;
	}
	printf("The converted binary digits in dicimal is %d", p);
	return 0;
}

