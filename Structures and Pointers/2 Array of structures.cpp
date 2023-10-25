// Array of structures:

#include <stdio.h>

struct student
{
	char name[50];
	int rollno;
	float marks;
};

int main()
{
	
	struct student s[50];
	int n,i;
	
	printf("how many students are in the class  ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Name, Roll No and Marks of student %d ", i+1);
		scanf("%s %d %f", &s[i].name, &s[i].rollno, &s[i].marks);
	}
	
	printf("\n \n");
	
		for(i=0; i<n; i++)
	{
		printf("%s %d %f", s[i].name, s[i].rollno, s[i].marks);
			printf("\n");
	}
	
}
