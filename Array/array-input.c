#include<stdio.h>

// Q. Write a program to enter elements in array.

void main()
{
	int arr[5]; // declaring array
	int i;
	
	printf("Enter the elements in the array : ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements entered in array are..\n");
	for(i=0; i<5; i++)
	{
		printf("\n%d",arr[i]);
    }
}
