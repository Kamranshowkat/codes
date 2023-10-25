// use recursion for implementing Ackerman function 
/*

  A(m,n) =  n+1                         if m=0
         =  A(m-1,1)                    if m>0 and n=0
         =  A(m-1, A(m, n-1))           if m>0 and n><0
                                        where m and n are positive integers
                                        
*/  

#include<stdio.h>
int ack(int, int);

int main()
{
	int m,n,ans;
	printf("enter the value of m and n \n");
	scanf("%d %d", &m , &n);
	
	ans = ack(m,n);
	printf("the answer is %d", ans);
}                    

int ack(int m, int n)
{
  if (m==0)
  return n+1;
  
  else if (m>0 && n==0)
  return ack(m-1, 1);
  
  else if (m>0 && n>0)
  return ack(m-1, ack(m,m-1));
}                  
