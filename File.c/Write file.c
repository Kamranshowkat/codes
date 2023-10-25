// Files:

#include<stdio.h>

int main()
{
	FILE *p;
	int x=10;
	char s[100]= "HELLO";
	p = fopen("a.text", "w");
	fprintf(p, "%d %s", x, s);
	fclose(p);
}
