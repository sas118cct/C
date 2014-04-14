#include<stdio.h>
int main()
{
	int a,b,i,j,c,d;
	printf("Enter any natural number\n");
	scanf("%d", &a);
	for(i=2;i<=a;i++){
		//b=a/i;
		//for(j=1;j<=i,j<=b;j++){
		//	if((i/j)==0||(a/j)==0){
		//		c= b/j;
		//		d=i/j;	
		//		printf("%d %d", c,d);
		//		}
		//	else{
		//	break;
		//	}
		
		if((a%i)==0){
		printf("%d\n", i);
		
	//	printf("%d", &b);
	}
	}
	return 0;
}
