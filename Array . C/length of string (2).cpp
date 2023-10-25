// length of the string
#include<stdio.h>
int main()
{
		char a[100], c[100];
		int i;
	printf("please enter the string ");
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		c[i] = a[i];
		i++;
	}
	printf("%d", i);
}
