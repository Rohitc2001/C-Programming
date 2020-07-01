 #include<stdio.h>

 // Q. write a program to check that numbers having same last digits.

 void main()
 {
	int a , b ; // declaring variables
	
	printf("enter value of int a : ");
	scanf("%d",&a);
	
	printf("enter value of int b : ");
	scanf("%d",&b);
	
	if(a%10 == b%10) // checking for last digit
	{
		printf("\nLast digit of numbers are same");
	}
	else
	{
		printf("Last digit of numbers is nit same");
	}
 }
