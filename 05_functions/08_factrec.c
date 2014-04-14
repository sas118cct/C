#include <stdio.h>

int factrec(int);

int main()
{
	int n, f;

	printf("Enter n:");
	scanf("%d", &n);

	printf("%d! = %d\n", n, factrec(n));	

	return 0;
}


int factrec(int n)
{
	int f;
	//printf("factrec(%d): &f:%p\n", n, &f);

	// Base criteria.
	if (n == 0)
		return 1;	

	f = n * factrec(n-1);

	return f;
}
