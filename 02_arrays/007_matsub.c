#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("Enter the matrix 1");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the matrix 2");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &b[i][j]);
		}
	}
	printf("The subtracted matrix is");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	return 0;
}

