// Factorial of a number

#include<stdio.h>

int main()
{
	int n, f, i;
	f=1;
	printf("Enter the number to find its factorial ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		f = f*i;
	}
	printf("Factorial of %d is %d ", n, f);
}
