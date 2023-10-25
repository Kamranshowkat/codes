// inputting an array
#include<stdio.h>
 int main()
 {
 	int i, arr[5];
 	printf("enter the elements of array: ");
 	
 	for(i=0; i<5 ; i++)
 	{
 	scanf("%d", &arr[i]);
    }
 	for(i=0; i<5 ; i++)
 	{
 	printf("%d", arr[i]);
    }
 }
