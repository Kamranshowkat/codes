#include<stdio.h>
int main()
{
	int a,i,n;
	a=2;
	printf("enter the no of terms ");
	scanf("%d", &n);
	 for(i=1; i<=n; i++)
	 {
	 	printf("%d ", a);
	 	a=a*a;
	 }
}
