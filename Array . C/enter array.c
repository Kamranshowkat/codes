// 

#include <stdio.h>
int main()
{

	int a[5],i,j,k;

	printf("entre the elements of array");
	for(i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=6;j++)
		{
			if(a[i]<a[j])
			{
			k=a[i];
			a[i]=a[j];
			a[j]=k;
	        }
			
		printf("%d",a[i]);
	   }
   }
}
