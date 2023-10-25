//finding same elements in an array

#include<stdio.h>
int main()
{
	int i,j,a[10]={1,4,6,8,2,5,8,15,11,13};
	for(i=0;i<10;i++)
	{
		for(j=i+1; j<9; j++)
		{
		if(a[i]==a[j])
		{
		printf("%d", a[j]);
	    }
	    }
	}
}
