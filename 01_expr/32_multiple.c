#include<stdio.h>
int main()
{
	int m,n,p;
	printf("Enter two numbeers");
	scanf("%d %d ", &m,&n);
	p = n/m;
	if((p*m)==n){
		printf("%d is multiple of %d", m,n);
	}
	return 0;
}

