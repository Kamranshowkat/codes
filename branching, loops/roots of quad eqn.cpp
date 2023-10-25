#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2;
	printf("please enter the cofficients \n");
	scanf("%d %d %d", &a, &b, &c);
	d= b*b-4*a*c;
	
	if (d<0)
	{
		printf("roots are imaginary");
	}
	if (d>=0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
	 printf("roots are %d %d", r1, r2);
	 
	}
	
	
	
}
