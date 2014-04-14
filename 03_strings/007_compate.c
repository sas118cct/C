#include<stdio.h>
int main()
{
	char arr1[20],arr2[20];
	int i,j,k=0;
	printf("Enter two strings\n");
	scanf("%s %s", arr1,arr2);
	for(i=0;i<20&&arr1[i]!='\0';i++){
		if(arr1[i]==arr2[i]){
			k++;
		}
	}
	if(i==k-1){
		printf("strings are equal\n");
	}
	else{
		printf("Strings are not equal\n");
	}
	return 0;
}

		
