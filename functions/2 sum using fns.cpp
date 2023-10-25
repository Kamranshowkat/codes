// add two integers using functions

#include<stdio.h>
int add(int , int );

int main()
{
	int x,y,sum;
	printf("please enter two integers \n");
	scanf("%d %d", &x, &y);
	
	sum = add(x,y);
	printf("the sum of two nos %d and %d is %d", x,y,sum);
	
}

int add(int x, int y)
{
	int s;
	s=x+y;
	return s;
}
