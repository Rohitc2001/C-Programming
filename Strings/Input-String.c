 #include<stdio.h>
 #include<stdlib.h>
 
 // Q. Write a program to accept string from users.
 
 void main()
 {
 	char str[100]; // Maximum size of string.
 	
 	printf("Enter the string : ");
 	
    fgets(str , sizeof str , stdin);
    
    printf("\nString entered is : %s",str);
 }
