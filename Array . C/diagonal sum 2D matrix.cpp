// sum of diagonal elements of a matrix

#include<stdio.h>
int main ()
{
int i,j, a[3][3];
int sum=0;
printf("enter the elements of matrix row-wise:");
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

for (i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	if(j==i)
	{
 	sum=sum+a[i][j];
    }
}
}
printf(" the sum of diagonal elements of the matrix is %d", sum);
}

