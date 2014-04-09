#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100],x[100];
	int p=0,r=0,i=0,j=0,s;
	int n,o,t;
	printf("Enter the first string");
	scanf("%s",a);
	printf("Enter the second string");
	scanf("%s",b);
	printf("Enter the position where the string is to be kept\n");
	scanf("%d",&p);
	r = strlen(a);
	n = strlen(b);
	while(i<=r)
	{	
	c[i] = a[i];
	i++;
	}
	s = n+r;
	o = p+n;
	for(i=p;i<s;i++)
	{
	x[i] = c[i];t =0;
	if(t<n)
	{
	a[i] = b[t];
	t = t+1;
	}
	o = 0;
	a[o] = x[o];
	o = 0+1;
	}
	printf("%s",a);
	return 0;
}
