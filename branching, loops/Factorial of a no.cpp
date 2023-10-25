// Factorial of any number:

#include<stdio.h>

int main()
{
	int i,a,f;
	printf("enter the number  ");
	scanf("%d", &a);
	
	for(i=1; i<=a; i++)
	{
		f=f*i;
	}
	printf("the factorial of the number %d is %d", a, f);
}
