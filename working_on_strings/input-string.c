#include<stdio.h>
#include<stdlib.h>

// Write a program to input the string from user.

void main()
{
	char str[50];
	
	printf("\nEnter any string : ");
	fgets(str , sizeof str , stdin);
	printf("the string you entered is %s : ",str);
}
