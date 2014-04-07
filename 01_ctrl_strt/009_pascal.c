#include<stdio.h>
int main()
{
	int i,j,a,n,k;
	printf("Enter no. of rows needed");
	scanf("%d", &a);
	for(i=0;i<=a;i++){
		for(j=0;j<=i;j++){
			if(i==0||j==0){
			printf("1");
			}
			else{
			int nf,rf,n_rf;
				for(nf=1,k=1;k<=n;k++){

					nf = nf*k;
				}
				for(rf=1,k=1;k<=n;k++){
					rf = rf*k;
				}
				for(n_rf=1,k=1;k<=n;k++){
					n_rf = n_rf*k;
				}
			printf("%d", nf/rf*n_rf);
			}
		}
	printf("\n");
	}
	return 0;
}

