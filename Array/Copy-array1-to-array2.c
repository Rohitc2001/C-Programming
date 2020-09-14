 #include<stdio.h>

 // Q. Write a program to copy one array to another array.

 void main()
 {
	int arr1[5] , arr2[5] ;
	int i;
	
	printf("Enter the elements in array\n");
	
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i] = arr1[i];
	}
	
	printf("\nThe copied array is ");
	
	for(i=0; i<5; i++)
	{
	    printf("\n%d",arr2[i]);	
	}
 }
