#include<stdio.h>
int main()
{
	char str[100], p;
	int i,j,n,k;
	printf("Enter the string\n");
	scanf("%s",str);
	i = 0;
	while(i<100 && str[i]!='\0'){
	i+=1;
	}
	n = i;
	for(j=0;j<=n/2;j++){
		p = str[j];
		str[j] = str[n-j];
		str[n-j] = p;
	}
	printf("The reversed string is \n");
	printf("%s", str);
	return 0;
}

