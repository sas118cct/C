

#include<stdio.h>

struct student
{
	char name[10];
	int age;
	float weight;
	int class;
} stu1;

int main()
{
	printf("Enter the data of the student");
	scanf("%c %d %f %d ",stu1.name, &stu1.age, &stu1.weight, &stu1.class);
	printf("The data that belogs to swamy is:  %c %d %f %d", stu1.name, stu1.age, stu1.weight, stu1.class);
	return 0;
}

