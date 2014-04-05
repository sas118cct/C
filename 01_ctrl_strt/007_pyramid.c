#include<stdio.h>
int main()
{
	int i,a,j,k,n;
	printf("Enter no. of rows");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(k=1;k<=(2*i-1);k++)
			printf(" s");
			printf("\n");
		
	}
	return 0;
}

