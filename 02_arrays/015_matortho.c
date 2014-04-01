#include<stdio.h>
int main()

{

	int a[3][3],b[3][3],d[3][3],i,j,m,n,k;
	int c[3][3] =   {100010001};
	printf("Enter the elements of the matrix");
	for(i=0;i<3;i++)

	for(j=0;j<3;j++)

	scanf("%d", &a);      				
	printf("The transposed matrix is");
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	b[j][i] = a[i][j];
	printf("%d\t",b[j][i]);
}
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	d[i][j] = 0;
	for(k=0;k<3;k++)	
	d[i][j] = d[i][j] + c[i][k]*b[k][i];
}
}
	if(d[i][j] == c[3][3])
	printf("The given matrix is ORTHOGONOL");
	else
	printf("NOT ORTHOGONOL");
	return 0;
}


