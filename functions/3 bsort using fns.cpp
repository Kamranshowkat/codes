// bubble sort using fns

#include<stdio.h>
void bsort(int [],int);

int main()
{
	int a[100];
	int i,n;
	printf("enter the size of an array  ");
	scanf("%d", &n);
	
	printf("enter the elements of array \n");
    for(i=0;i<n;i++)
	{ 
		scanf("%d ", &a[i]);
	}
	printf("before sorting \n");
	 for(i=0;i<=n;i++)
	{ 
		printf("%d ", a[i]);
	}
	printf("\n");
	bsort(a,n);
}

void bsort(int a[], int s)
{
	int i,j,t;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]= a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("after sorting \n");
	 for(i=0;i<s;i++)
	{ 
		printf("%d ", a[i]);
	}
	
}














