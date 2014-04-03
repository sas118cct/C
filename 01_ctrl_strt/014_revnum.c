#include<stdio.h>
int main()
{
	int p,q,r,n,R,N;
	printf("Enter the value of n");
	scanf("%d", &N);
	n = N; R = 0;
	while(n>0){
	R = R*10;
	r = n%10; R = R+r;q = n/10;
	n = q;
	}
	printf("The reversed number is %d",R);	
	return 0;
}

	
