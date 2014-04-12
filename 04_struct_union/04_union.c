#include<stdio.h>

union A {
	int i;
	char c;
	float f;
	double d;
};

union B {
	char c;
	short int si;
};

int main()
{
	printf("sizeof(union A):%d\n", sizeof(union A));
	printf("sizeof(union B):%d\n", sizeof(union B));

	return 0;
}
