 #include<stdio.h>

 // Q. Write a program to find sum of all the elements in array.

 void main()
 {
	int arr[5]; // array of 6 elements
	int i, sum=0 ;
	
	printf("Enter the elements in array \n");
	
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum += arr[i] ; // sum = sum + arr[i]
	}
	printf("\nThe sum of elements in array is : %d" , sum);
 }

