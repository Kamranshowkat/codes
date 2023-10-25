// Files:

#include<stdio.h>

int main()
{
	FILE *p;
	p = fopen("a.text", "r");
	int x;
	char s[100];
	fscanf(p, "%d %s", &x, &s);
	fprintf("%d %s", x, s);
	fclose(p);
}
