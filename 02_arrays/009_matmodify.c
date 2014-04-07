#include<stdio.h>
int main()
{
	int a[3][3],i,j,b,c;
	printf("Enter the matrix");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the row number and column number to change the number\n");
	scanf("%d %d", &b,&c);
	printf("Enter the number to add");
	scanf("%d", &a[b][c]);
	printf("The changed matrix is ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", a[i][j]);
		}
	}
	return 0;
}

