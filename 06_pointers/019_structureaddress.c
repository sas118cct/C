#include<stdio.h>
struct student
{
	char name[10];
	int clas;
	float age,weight;
};

int main()
{
	int i,n;
	struct student reg[100];
	printf("Enter the number of students\n");
	scanf("%d", &n);
	printf("Enter the data of the students\n");
	for(i=0;i<n;i++){
		scanf("%s %d %f %f", reg[i].name,&reg[i].clas,&reg[i].age,
							&reg[i].weight);
	}
	printf("The addresses of the structure is : %p\n", &reg);
	for(i=0;i<n;i++){
		printf("The address of %d th student is %p\n",i,
			&reg[i]);
		printf("&reg[%d]:%p &name:%p &class:%p &age:%p &weight:%p\n\n", 
			i, &reg[i], &reg[i].name,
				&reg[i].clas, &reg[i].age,
				&reg[i].weight);
	}
	return 0;
}

