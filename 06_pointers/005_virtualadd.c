#include<stdio.h>

int gi, *gptr1 = &gi;
char gc, *gptr2 = &gc;
float gf, *gptr3 = &gf;
double gd, *gptr4 = &gd;

int main()
{
	int li, *lptr1 = &li;
	char lc, *lptr2 = &lc;
	float lf, *lptr3 = &lf;
	double ld, *lptr4 = &ld;
	int a;
	li = 10; gi = 11;
	lc  = 'A'; gc = 'B';
	lf = 10.3; gf = 18.3;
	ld = 22.43; gd = 24.4;
	printf("The address of local var %d is %p and global var %d is %p\n\n", li, &lptr1, gi, &gptr1);

	printf("The address of local var %c is %p and global var %c is %p\n\n", lc, &lptr2, gc, &gptr2);
	printf("The address of local var %f is %p and global var %f is %p\n\n", lf, &lptr3, gf, &gptr3);
	printf("The address of local var %f is %p and global var %f is %p\n\n", ld, &lptr4, gd, &gptr4); 
	printf("Address of main is %p  printf is  %p\n", main, printf);

	printf("Program to make system wait for input\n\n");
	printf("Type the commands follows\n");
	printf("ps -a\n cat /proc/PID/status\n cat /proc/PID/maps\n");
	scanf("%d",&a);
	return 0;
}

