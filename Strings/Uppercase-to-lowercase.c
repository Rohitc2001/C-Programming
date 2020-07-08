 #include<stdio.h>
 #include<stdlib.h>

 // Q. Write a program to convert UPPERCASE character to lowercase.

 void main()
 {
  char str[100];
  int i=0;
  
  	printf("Enter the string : ");
  	fgets(str , sizeof str , stdin);
  
  	while(str[i] != '\0')
  	{
	    if(str[i]>='A' && str[i]<='Z')
		{
			str[i] = str[i] + 32 ;			
		}
		i++;	
  	}	
	printf("\nConverted string is : %s",str);
 }
