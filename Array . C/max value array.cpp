// finding max value in array
#include<stdio.h>
 int main()
 {
 	int i,max, a[5] = {95,36,5,24,88};
 	max=a[0];
 	for(i=0; i<5 ; i++)
 	{
 		if(max<a[i])
 		{
 	     max=a[i];
 	    }
    }
     printf("the max value in array is %d",max);
}
