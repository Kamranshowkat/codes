/*

   *
  * *
*  *  *

*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("please enter the no of terms");
	scanf("%d", &n);
	
	for(j=1;j<=n;j++)
	{
		printf("\n");
		for(i=n-1;i>=j;i--)
		{
				printf(" ");
		}
		for(i=1;i<=j;i++)
		{
				printf("* ");
		}
	}
	
}
