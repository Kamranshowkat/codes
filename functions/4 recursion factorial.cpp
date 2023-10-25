// use recursion to find factorial of a number

#include<stdio.h>
int factorial(int);
int main()
{
	int x;
	int ans;
	printf("please enter the number");
	scanf("%d", &x);
	ans= factorial(x);
	printf("the factorial of %d is %d", x, ans);
}
 
 int factorial(int a)
 {
 	if(a>1)
 	return a*factorial(a-1);
 	else
 	return 1;
 }
