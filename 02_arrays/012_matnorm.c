#include<stdio.h>
#include<math.h>
void main()
{
    int a[10][10],i,j,nrm=0,t=0,m,n,s;
    float k;
    printf("Enter the order of the matrix");
    scanf("%d%d",&m,&n);
    printf("Enter the elements");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    printf("The norm of the matrix is:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(i==j)
            t=t+a[i][j];
            nrm=nrm+pow(a[i][j],3);
        }
           
            k=sqrt(nrm);
            printf("%f",k);
	return 0;
     
}

