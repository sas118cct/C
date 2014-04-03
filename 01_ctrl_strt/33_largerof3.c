#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	while(a>b && a>c){
		printf("%d is the largest number", a);
	break;
	}
	while(b>c && b>a){
		printf("%d is the largest number", b);
	break;
	}
	while(c>a &&c>b){
		printf("%d is the largest number", c);
	break;
	}
	return 0;
}

