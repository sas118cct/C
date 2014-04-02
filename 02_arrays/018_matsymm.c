#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], i,j,k,c[3][3];
	printf("Enter the elements in the first matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("The transposed matrix is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[j][i] = a[i][j];
			printf("%d", &b);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		
		c[i][j] =   (a[i][j] - b[i][j]);
		
		}
		
	}

	if(c[i][j] ==0)
	{
	printf("The matrix is symmetric");
	}
	else
	printf("The matrix is not symmetric");
	return 0;
}

