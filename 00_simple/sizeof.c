#include<stdio.h>
int main()
{
	int i;
	char c; float f; double d;
	int I = sizeof(i), C = sizeof(c), F = sizeof(f), D = sizeof(d);
	printf("isize = %d  csize = %d  fsize = %d  dsize = %d", I,C,F,D);
	return 0;
}

