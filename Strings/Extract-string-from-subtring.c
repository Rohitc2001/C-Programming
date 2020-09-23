 #include<stdio.h>
 #include<stdlib.h>

 // Q. Write a program to find the sub-strig from the given string.
 
 void main()
 {
	char str[100], sstr[50]; 
	int pos, len, i=0;
	
	printf("enter the string : ");
	fgets(str, sizeof str, stdin);
    
	printf("enter the position : ");
	scanf("%d",&pos);	
	
	printf("enter the len : ");
	scanf("%d",&len);
	
		while(i<len)
		{
			sstr[i] = str[pos+i-1];
			i++;
		}
		
		sstr[i] = '\0';
		
		printf("The sub-string is : %s",sstr);
 }
