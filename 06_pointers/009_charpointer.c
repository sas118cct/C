#include<stdio.h>
int main()
{
	char c[10]="HELLO",*cp,i;
 	for(i=0,cp=&c[0];i<10;i++){
        printf("c[%d]:%c is *(%p):%d\n", i, c[i], cp, *cp);
        cp = cp+1;
        }
        return 0;
}

