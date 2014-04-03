#include<stdio.h>
#include<math.h>
int main()
{
	float p,n,r,a,s,c;
	printf("Enter the amount and number of months");
	scanf("%f %f", &p,&n);
	r = 0.01; s = (p*n*r)/100;
	printf("The simple intrest is %f \n ", s);
	c = p * pow((1+r/100),n);
	printf("The compound intrest is %f ", c);
	return 0;
}

