#include<stdio.h>
int main()
{
	int i,a;
	printf("Entr any integer:");
	scanf("%d", &a);	
	if((a%2)==0){
		printf("The number  %d is a even number \n", a);
	}
	else{
	printf("The number %d is odd number", a);
	}
	return 0;
}

