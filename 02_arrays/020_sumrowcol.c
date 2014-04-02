#include<stdio.h>
int main()
{
	int a[100][100],i,j,m,n,sum;	
	printf("Enter number of rows and colums\n");
	scanf("%d %d", &m,&n);
	printf("Enter the matrix elements");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(sum =0,j=0;j<n;j++){
			sum += a[i][j];
		}
		printf("Sum of %d th row is %d\n", i,sum);
	}
	for(j=0;j<n;j++){
		for(sum=0,i=0;i<m;i++){
			sum += a[i][j];
		}
		printf("Sum of %d th column is %d\n ", j,sum);
	}
	return 0;
}
