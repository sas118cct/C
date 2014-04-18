#include<stdio.h>
int main()
{
	char str[100], p,(*ptr)=&str[100];
	int i,j,n,k;
	printf("Enter the string\n");
	scanf("%s",str);
	i = 0;
	while(i<100 && (ptr+i)!='\0'){
	i+=1;
	}
	n = i;
	printf("The reversed string is \n");
	for(j=0;j<=n/2;j++){
		p = *(ptr+j);
		*(ptr+j) = *(ptr+(n-j));
		*(ptr+(n-j)) = p;

	}
	printf("%s", str);

	return 0;
}

