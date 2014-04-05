#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter no. of rows");
	scanf("%d", &n);
	for(i=n;i>=1;i--){
		for(j=1;j<=2*n-1;j++)
			printf("s");
			printf("\n");
		for(k=1;k<=(n+1)-i;k++)
			printf(" ");
	}
	return 0;
}

	
