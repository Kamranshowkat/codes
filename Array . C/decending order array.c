//program in c to arrange an array in decending order

#include<stdio.h>
int main()
{
	int a[7] = {5,7,3,1,4,6,2};
	int i,j,k;
	for(i=0; i<=6; i++)
	{
		for(j=i+1;j<=6;j++)
		{
			if(a[i]<a[j])
			{
			k=a[i];
			a[i]=a[j];
			a[j]=k;
	        }
			
			
		}
			printf("%d",a[i]);
    } 
    	
	
	
}
