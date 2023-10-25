// length of the string
#include<stdio.h>
int main()
{
		char c[100];
		int i;
	printf("please enter the string ");
	gets(c);
	i=0;
	while(c[i]!='\0')
	{
		i++;
	}
		printf("the length of the string isA %d", i );
}
