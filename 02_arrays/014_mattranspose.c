#include<stdio.h>
int main()
{
	int a[3][3],i,j,b[3][3];
	printf("Enter the matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d" , &a[i][j]);
		}
	}
	printf("The transpose of a matriz is");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[j][i] = a[i][j];
			printf("%d", b[i][j]);
		}
	}

}
