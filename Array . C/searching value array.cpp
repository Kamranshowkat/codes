//searching an element in an array

#include<stdio.h>
int main()
{
	int i, s, a[8] = {5, 21, 32, 54, 62, 55, 9, 19};
	printf("enter the value you want to search:");
	scanf("%d", &s);
	
	for(i=0; i<8; i++)
	{
		if (s==a[i])
		{
			printf("the value is found at %d th position", i+1);
		}
	}
}
