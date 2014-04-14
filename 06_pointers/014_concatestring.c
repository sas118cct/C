#include<stdio.h>
int main()
{
	int i,j,k,n;
	char str1[50],str2[50],str3[50];
	printf("Enter the two strings to concatenate\n");
	scanf("%s %s", str1,str2);
	while(i<50 && str1[i]!='\0'){
	i+=1;
	}
	n = i;
	for(j=0;j<n;j++){
		str3[j] = str1[j];
	}
	for(i=0,k=n;k<50;i++,k++){
		str3[k] = str2[i];
	}
	printf("The concatenated string is \n");
	printf("%s", str3);
	return 0;
}
