#include<stdio.h>

int main()
{
	char a[100],b[100],c[100];
	int p = 0,r ,i = 0,k,x,s,n,t = 0;
	printf("Enter the first string");
	scanf("%s", a);
	printf("Enter the second string\n");
	scanf("%s", b);
	printf("Enter the position where the string is to be kept\n");
	scanf("%d", &p);
	r = strlen(a);
	n = strlen(b);
	while(i<=r){
		c[i] = a[i];
		i++;
	}
	s = n+r;
	k = p+n;
	for(i=p;i<s;i++){
		x = c[i];
		if(t<b[i]){	
		a[i] = b[t];
		t = t+1;
		}
		a[0] = x;
		k = k+1;
		}
	printf("%s", a);
	return 0;
}
 
