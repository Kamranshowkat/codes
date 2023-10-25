// program to print string in reverse order using pointers

#include<stdio.h>
int main ()
{
	char *p, *q;
	char a[50];
	printf("enter the string to be reversed \n");
	scanf("%s", &a);
	p = &a[0];
	q = p;
	
	while(*p != '\0')
	{
		p++;
	}
	
	while(p !=q)
	{
		p--;
		printf("%c", *p);
	}
}
