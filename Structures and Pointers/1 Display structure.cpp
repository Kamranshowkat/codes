//structure

#include <stdio.h>

struct student
{
	char name[50];
	int rollno;
	float marks;
};

int main()
{
	
	struct student s1;
	printf("Enter the name of the student  ");
	//gets(s1.name);
	scanf("%s", &s1.name);
	printf("Enter roll no of the student  ");
	scanf("%s", &s1.rollno);
	printf("Enter marks of the student   ");
	scanf("%f", &s1.marks);
	
	printf("\n \n");
	//print the details of the student:
	printf("Name = %s", s1.name);
	printf("\n");
	printf("Roll no = %d", s1.rollno);
	printf("\n");
	printf("Marks = %f", s1.marks);
	
	
}
