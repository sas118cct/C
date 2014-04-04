#include<stdio.h>
int main()
{
	int i,a;
	printf("1.English\n 2.Telugu\n 3.Hindi\n 4.Sanskrit\n\n");
	printf("Enter your choic\n\n");
	scanf("%d", &a);
	switch(a){
	case 1: printf("Welcome to C");
	break;

	case 2: printf("C ki swagatam");
	break;

	case 3: printf("C ka swagat hay");
	break;

	case 4: printf("C ka swagataha");
	break;

	default: printf("Invalid option");
	}
	return 0;
}

