#include<stdio.h>
int main()
{
	int a[3];
	printf("enter three values:");
	scanf("%d %d %d",&a[0],&a[1],&a[2]);

	if(a[0]>a[1] && a[0]>a[2])
	printf("%d is the largest element",a[0]);

	else if(a[1]>a[2] && a[1]>a[0])
	printf("%d is the largest element",a[1]);

	else if(a[2]>a[0] && a[2]>a[1])
	printf("%d is the largest element",a[2]);
	return 0;
}
