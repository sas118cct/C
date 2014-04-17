#include<stdio.h>
#include<string.h>
 
void reverse(char [],int);
int main()
{
    	char str1[20];
    	int size;
 
    	printf("Enter a string to reverse: ");
    	scanf("%s", str1);
    	size = strlen(str1);
    	reverse(str1,0);
	printf("\n");
    	return 0;
}

 
void reverse(char str[],int i)
{
	if (str[i] == '\0')
		return;
	else
		reverse(str,i+1);
	printf("%c", str[i]);

}
