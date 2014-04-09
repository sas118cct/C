#include<stdio.h>

int main()
{
	int size,a[4][4];
	int i,j=0, sum,sum1,sum2,k=0;

	printf("Enter matrix : ");
	for(i=0;i<4;i++){	
    		for(j=0;j<4;j++)
   		 scanf("%d",&a[i][j]);
        }

	printf("Entered matrix is :");
	for(i=0;i<4;i++){
   	 printf("n");
        	for(j=0;j<4;j++){
        		printf("t%d",a[i][j]);
       		 }
	}


	sum=0;
	for(i=0;i<4;i++) {
    		for(j=0;j<4;j++){
   		 if(i==j)
   		 sum=sum+a[i][j];
   		 }
	}
	sum1 = 0;
	for(i=0;i<4;i++){
    		for(j=0;j<4;j++){
   		 sum1=sum1+a[i][j];
    	}
    	if(sum==sum1)
        k=1;
    	else
        {
        k=0;
        break;
        }
	}

	for(i=0;i<4;i++){
    	sum2=0;
    	for(j=0;j<4;j++){
    	sum2=sum2+a[j][i];
    	}
    	if(sum==sum2)
        k=1;
    	else
        {
        k=0;
        break;
        }
}

	if(k==1)
    	printf(" Magic square");
	else
    	printf("NOt a  magic square");

	return 0;
}
