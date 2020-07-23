 #include<stdio.h>
 #include<string.h>
 
 // Q. Write a program to sort the string in ascending order. 

 void main()
 {
	char str[100] , ch;
	int i,j,len;
	
	printf("enter the string : ");
	fgets(str , sizeof str , stdin);
	
	len = strlen(str);
	
	for(i=0 ; i<len;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(str[j]>str[j+1])
			{
				     ch = str[j];
				 str[j] = str[j+1];
			   str[j+1] = ch;
			}
		}
	}
 	 
	printf("\nThe string after sorting in ascending order is : %s",str);
 }
