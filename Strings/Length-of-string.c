 #include<stdio.h>
 #include<stdlib.h>

 // Q. Find the length of string without using library function.
 // IDE used DEV C++

 void main()
 {
 	char str[100]; // Declaring Maximum length of string.
 	int i=0;
 	
 	printf("Enter the string : ");
 	fgets(str , sizeof str , stdin);
 	
 	while(str[i] != '\0')
 	{
 		i++;	
	}
	
	printf("The length of string is %d",i-1);
 }
 // NOTE : The 'blank spaces' b/w words are also counted in length.
