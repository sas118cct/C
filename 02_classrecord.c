#include<stdio.h>

struct student
{
	char name[20];
	int class;
	float age,weight;
};

int main()
{
	int i,n;
	struct student reg[100],stu;
	printf("Enter no.of students\n");
	scanf("%d", &n);
	printf("Enter data\n");
	scanf("%s %d %f %f", stu.name,&stu.class,&stu.age, &stu.weight);
	printf("Address of structure is %p\n", &stu);
	for(i=0;i<n;i++){	
		printf("&reg[%d] = %p  \n %p\n %p\n %p\n %p\n",i,&stu.name
				 &reg[i].name
				&reg[i].class,&reg[i].age, &reg[i].weight);
	}
	return 0;
}



 
