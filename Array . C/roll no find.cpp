// finding roll no of students marks less than 35
// inputting an array
#include<stdio.h>
 int main()
 {
 	int i, marks[5] = {95,36,5,24,88};
 	
 	for(i=0; i<5 ; i++)
 	{
 		if(marks[i]<35)
 		{
 	     printf("the roll no of the studens are %d", i+1);
 	     
 	    }
    }
}
