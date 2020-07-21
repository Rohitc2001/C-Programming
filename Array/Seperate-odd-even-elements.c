 #include<stdio.h>

 // Q. Write a program to seperate ODD and EVEN integers in two seperate arrays .

 void main()
 {
	int arr1[10], arr2[10], arr3[10];
	int i, j=0, k=0; // initialize j & k = 0
	
	printf("Enter the elements in array\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	
	for(i=0; i<10; i++)
	{
		if(arr1[i]%2 == 0) 
		{
			arr2[j] = arr1[i]; // moving even elements in arr2[j]
			j++;
		}
		else 
		{
			arr3[k] = arr1[i]; // moving odd elements in arr3[k]
			k++;
		}
	}
	
	printf("\nThe ODD elements in array are ");
	for(i=0; i<k; i++)
	{
		printf("\n %d",arr3[i]);
	}
    
    printf("\nThe EVEN elements in array are ");
	for(i=0; i<j; i++)
	{
	    printf("\n %d",arr2[i]);
	}
 }
