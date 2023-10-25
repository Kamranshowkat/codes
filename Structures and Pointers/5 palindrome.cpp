// program in c to check weather a string is palindrome or not using pointers

#include<stdio.h>

int main()
{
	char a[50];
	char *p, *q;
	int flag=1;
	printf("enter the string to be checked \n");
	scanf("%s", &a);
	p = &a[0];
	q=p;
	
	while (*p != '\0')
	{
		p++;
	}
	
   p--;
	
	while(p!=q)
	{
		if(*q!=*p)
		{
			printf(" it is not a palindrome");
			flag=0;
			break;
		}
		else
		q++;
		p--;
	}
	if(flag==1)
	{
		printf("it is a palindrome");
	}
}
