#include<stdio.h>  
int main() 
{ 
	int n;  
    	printf("Enter the limit"); 
    	scanf("%d",&n); 
    	printf("sum=%d",sum(n)); 
	return 0; 
} 

int sum(int n) 
{ 
	if(n==1) 
	return 1; 
	else 
	return sum(n-1)+n; 
} 

