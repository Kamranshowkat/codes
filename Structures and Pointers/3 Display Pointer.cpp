// Pointers

#include <stdio.h>
int main()
{
	int x;
	x=10;
	
	int *p;
	p=&x;  // p will store the adress of x
	
	printf("the adress of %d is %x", x,p);
	
	printf("\n");
	
	//print the value that is at adress p:
	
	printf("value at pointer is %d ", *p);
}
