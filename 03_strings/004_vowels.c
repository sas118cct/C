#include<stdio.h>
int main()
{
	char arr[20],vow[10] = "aeiouAEIOU";
	int i,j,v=0,c=0;
	printf("Enter the string\n");
	scanf("%s", arr);
	for(i=0;i<20&&arr[i]!=0;i++){
		for(j=0;j<10;j++){
			if(arr[i]==vow[j]){
				v++;
			}
			
		}
				c++;
	}
	printf("vowels are %d\n consonants are %d\n", v,c-v);
	return 0;
}
	
