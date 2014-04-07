#include<stdio.h>
int main()
{
	int n,i,a,b;
	printf("Enter the number");
	scanf("%d", &n);
	for(i=1;i<=5;i++){
		a = n%10;
		b = n/10;
		if(a == 0){
			break;
		}
		n = b;
	}
	if(i ==1){
		printf("The numbr is in Ten's");
	}
	else if(i == 2){
		printf("The numbr is in Hundred's");
	}
	else if(i == 3){			
		printf("The number is in Thousand's");
	}
	else if(i == 4){
		printf("The number is in Ten thousand's");
	}
	else if(i == 5){
		printf("The numbr is in lakh's ");
	}
	return 0;
}

