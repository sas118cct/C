#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("Enter the first matrix elements");
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	scanf("%d",&a[i][j]);
}
}                                 
	printf("Enter the second matrix elements");
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	scanf("%d",&b[i][j]);
}
}                                  
	printf("The multiplicated matrix is:");
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	c[i][j] = 0;
	for(k=0;k<3;k++)

	c[i][j] = c[i][j]+ a[i][k]*b[k][j];
	printf("%d\t",c[i][j]);
}
}
	return 0;
}

