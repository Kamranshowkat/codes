// functions
// return_type function_name(parameters)

//program to find greater of two nos using fns

#include<stdio.h>

int greater(int, int);  //function declaration

int main()
{
	int a,b;
	int max;
	a=10;
	b=5;
	max=greater(a,b);
	printf("the greater integer is %d", max);
}

//function definition 
int greater(int x, int y)
{
	int g;
	if(x>y)
	g=x;
	else
	g=y;
	
	return g;
}
