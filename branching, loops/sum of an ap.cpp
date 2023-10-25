// code for finding sum of an AP


# include <stdio.h>
# include <math.h>
 int main ( )
 {
 	int a,n,d,s;
 	 printf("enter the first number");
 	 scanf("%d", &a);
 	 printf("enter the number of terms");
 	 scanf("%d", &n);
 	 printf ("enter the common difference");
 	 scanf ("%d", &d);
 	 s = n*(2*a+(n-1)*d)/2;
 	 
 	 printf("the value of s is %d", s);
 	 
 }
 
