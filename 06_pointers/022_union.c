#include<stdio.h>
union student 
{	
	char name[10];
	int class;
	float age,weight;
}

 main()
{
	union student var;
	printf("Enter the data\n");
	scanf("%s %d %f %f", var.name, &var.class, &var.age, &var.weight);
	printf("Addresses are\n");
	printf("%p\n", &var);
	printf("%p\n %p\n %p\n %p\n", &var.name, &var.class, &var.age, &var.weight);

}

