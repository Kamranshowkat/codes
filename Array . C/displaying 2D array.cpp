// displaying an 2D array

#include<stdio.h>
int main ()
{
	int i,j, a[4][3];
	printf("enter the elements of matrix row-wise:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
		for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d",a[i][j]);
		}
	}

}
