//  swapping of two nos using fns

#include<stdio.h>
void swap (int, int);

int main()
{
	int x,y;
	x=10;
	y=20;
	printf(" before swapping values are %d %d  \n", x,y);
	
	swap(x,y);
	
	
}
void swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf(" after swapping values are %d %d", a,b);
}
