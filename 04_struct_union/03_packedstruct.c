#include<stdio.h>

struct A {
	char ca; int  i; char cb; float f;
};

struct B {
	char ca; char cb; int  i; float f;
};

struct C {
	char ca; int  i; float f; char cb;
};

struct D {
	int  i; float f; char ca; char cb;
};

struct __attribute__((__packed__)) PA {
	char ca; int  i; char cb; float f;
};

struct __attribute__((__packed__)) PB {
	char ca; char cb; int  i; float f;
};

struct __attribute__((__packed__)) PC {
	char ca; int  i; float f; char cb;
};

struct __attribute__((__packed__)) PD {
	int  i; float f; char ca; char cb;
};

int main()
{
	int i;
	struct A arr_a[3];
	struct PA arr_pa[3];

	printf("sizeof(struct A): %d\n", sizeof(struct A));
	printf("sizeof(struct B): %d\n", sizeof(struct B));
	printf("sizeof(struct C): %d\n", sizeof(struct C));
	printf("sizeof(struct D): %d\n", sizeof(struct D));

	printf("sizeof(struct PA): %d\n", sizeof(struct PA));
	printf("sizeof(struct PB): %d\n", sizeof(struct PB));
	printf("sizeof(struct PC): %d\n", sizeof(struct PC));
	printf("sizeof(struct PD): %d\n", sizeof(struct PD));

	for (i=0; i<3; i++) {
		printf("&arr_a[%d]:%p\n", i, &arr_a[i]);
	}

	for (i=0; i<3; i++) {
		printf("&arr_pa[%d]:%p\n", i, &arr_pa[i]);
	}

	return 0;
}
