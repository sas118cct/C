#include<stdio.h>
int main()
{
	int a[3][3],b[3][3], c[3][3],i,j,k,m;
	printf("\n Enter 1st matrix ");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]);
			}
		}
	printf("\n Enter the 2nd matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &b[i][j]);
			}
		}
	c[i][j] = a[i][j]+b[i][j];
	printf("The added matrix is %d", c[i][j]);
	printf("\n");
	return 0;
}

