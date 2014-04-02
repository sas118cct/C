#include<stdio.h>
#include<math.h>
int main()
{
	double y,p,q;
	printf("x\t sin x\t cos x");
	y = 0;
	while(y<=80){
		p = sin(y);
		q = cos(y);
		printf("%d\t%f\t%f\n", y,p,q);
		y += 15;
	}
	return 0;
}

