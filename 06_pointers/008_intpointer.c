
#include<stdio.h>
int main()
{

	int arr[10] = { 1,2,3,4,5,6 },i,*p;
	for(i=0, p=&arr[0];i<10;i++){
		printf("arr[%d]:%d is *(%p):%d\n", i, arr[i], p, *p);
		p = p+1;
	}
	return 0;
}
