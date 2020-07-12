 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

 // Q. Write a programm to copy one string to another.
 // IDE used DEV C++
 void main()
 {
	char str1[100] , str2[100];
	int i;
	
	printf("enter string 1 : ");
	fgets(str1 , sizeof str1 , stdin);
	
	i=0;
	
	// copy str1 to str2.
	
	while(str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0'; // terminate str2 till '\0'.
	
	printf("\nStr1 : %s",str1);
	printf("Copied Str2 : %s",str2);
	printf("\nNumber of characters copied : %d",i);
 }
