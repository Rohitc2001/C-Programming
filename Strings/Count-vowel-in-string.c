 #include<stdio.h>
 #include<stdlib.h>

 // Q. Write a program to find the number of vowels in a string.

 void main()
 {
   char str[100];
   int i=0 , vowel=0;
  
   printf("\t\nEnter the string : ");
   fgets(str , sizeof str , stdin);
     
   while(str[i] != '\0')
   {
    if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
    {
  		vowel++;
    }
	i++;
   }
    
	printf("The number of vowels in a string is : %d",vowel);
 }

