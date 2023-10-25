//use of switch 

#include<stdio.h> 
int main()
{
	
int sw;
printf("Enter 1 for english, 2 for arabic, 3 for hindi ");
scanf("%d", &sw);

switch(sw)
 {
   case 1 : 
   printf("hello");
   break;
   case 2 :
   printf("asalam u alaikum");
   break;
   case 3: 
   printf("namaste");  
   break;
   default:
   printf("incorrect option");

 }

}
 




