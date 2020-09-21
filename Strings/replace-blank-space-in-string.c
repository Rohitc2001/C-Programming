 #include<stdio.h>
 #include<stdlib.h>

 /*
	Q. Write a program to replace the blank spaces in string with 
	   special character ('*').
 */	  
 
 void main()
 {
 	char str[100];
	int i;

	printf("Enter the string : ");
	fgets(str , sizeof str , stdin);
	
	printf("\nOriginal String -> %s",str);	
	
	while(str[i] != '\0')
	{
		if(str[i] = " ")
		{
			str[i] = '*' ;
		}
		i++;
	}
	printf("string is : %s",str);
 }
 
