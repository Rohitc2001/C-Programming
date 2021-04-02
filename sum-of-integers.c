                                 // program to find sum of two integers 
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
		
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\nSUM OF a and b is : %d",a + b);
	
	getch();
}

/* NOTE
-> write   clrscr(); & getch(); only when using Turbo C++ . 

-> Output :
 
 Enter the value of a : 5
 Enter the value of a : 4
 SUM OF a and b is : 9

*/                               
