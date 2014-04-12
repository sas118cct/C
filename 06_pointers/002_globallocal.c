#include<stdio.h>

int gi, *gptr1 = &gi;
char gc, *gptr2 = &gc;
float gf, *gptr3 = &gf;
double gd, *gptr4 = &gd;

void func(void);

int main()
{
	int li, *lptr1 = &li; char lc, *lptr2 = &lc; float lf, *lptr3 = &lf; double ld, *lptr4 = &ld;

	printf("&gi:%p\n", &gptr1);
	printf("&gc:%p\n", &gptr2);
	printf("&gf:%p\n", &gptr3);
	printf("&gd:%p\n", &gptr4);
	printf("\n");

	printf("main(): &li:%p\n", &lptr1);
	printf("main(): &lc:%p\n", &lptr2);
	printf("main(): &lf:%p\n", &lptr3);
	printf("main(): &ld:%p\n", &lptr4);
	printf("\n");

	func();

	return 0;
}

void func(void)
{
	int li, *lptr1 = &li; char lc, *lptr2 = &lc; float lf, *lptr3 = &lf; double ld, *lptr4 = &ld;

	printf("func(): &li:%p\n", &lptr1);
	printf("func(): &lc:%p\n", &lptr2);
	printf("func(): &lf:%p\n", &lptr3);
	printf("func(): &ld:%p\n", &lptr4);
	printf("\n");

	return;
}

