#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,m;
	printf("\n Enter first matrix");
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	scanf("%d\t",&a[i][j]);
}
}
	printf("\n Enter second matrix");
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	scanf("%d\t",&b[i][j]);
}
}
	printf(" The added matrix is");
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	c[i][j]  = a[i][j] + b[i][j];
	printf("%d\t",c[i][j]);
}
}
	return 0;
}

