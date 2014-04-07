#include<stdio.h>
int main()
{
	int i,j,a[3][3];
	printf("Enter the matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("The upper triangle matrix is \n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i>j){
			printf(" ");
			}
			else{
			printf("%d", a[i][j]);
			}
		}
	}
	printf("The lower triangle matrix is \n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i<j){
			printf(" ");
			}
			else{
			printf("%d", a[i][j]);
			}
		}
	}
	return 0;
}

