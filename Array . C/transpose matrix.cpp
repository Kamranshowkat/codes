//transpose of a matrix

#include<stdio.h>
int main ()
{
int i,j,r,c ,a[10][10], b[10][10];
printf("enter the no of rows and columns ");
scanf("%d%d", &r, &c);
printf("enter the matrix row wise ");
for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("the entered matrix is: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}


	printf("the transpose of the entered matrix is: \n");
for (i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
b[i][j]=a[j][i];
}
}
for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");
	}

}
