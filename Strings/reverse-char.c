 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

 // Q. write a program to print the character of a string in reverse order.
 
 void main()
 {
	char str[100]; // declared string of size 100.
	int i;
	
	printf("enter the string : ");
	fgets(str , sizeof str , stdin);
	
	i = strlen(str);
	
	printf("\nThe character of string in reverse order is ");
	
	for(str[i] = '\0'; i >= 0; i--)
	{
		printf("%c",str[i]);
	}
 }
