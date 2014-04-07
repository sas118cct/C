#include<stdio.h>
#include<stdlib.h>
int gi,*gptr = &gi;

int main()
{
	int li,a, *lptr = &li,*hptr;
	hptr = malloc(20*1024);
	printf("The address of global variable gi: %d and its pointer gptr: %p is \n",  gi, gptr);
	printf("The address of local variable li : %d and its pointer lptr: %p is \n", li, lptr);
	printf("The address of mainis %p and printf is %p\n", main, printf);
	printf("The address of hptr is %p\n", hptr);
	printf ("See the virtual address\n");
	scanf("%d", &a);
	free(hptr);
	return 0;
}

