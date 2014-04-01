#include<stdio.h>
int main()
{
	int a[3][3],i,j,m;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", a[i][j]);
			}
		}
	m = a[0][0]+a[1][1]+a[2][2];
	printf("The trace of a matrix is %d", m);
	return 0;
}
