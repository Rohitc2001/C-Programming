 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

 #define str_size 100 // Declared maximun size of string.

 void main()
 {
	char str[str_size];
	int i , wrd ;
	
	printf("Enter the string : ");
	fgets(str , sizeof str , stdin);
	
	i = 0;
	wrd = 1;
	
	while(str[i] != '\0')
	{
	 if(str[i]==' ' || str[i]=='\n'|| str[i]=='\t')
	 {
		wrd++;
	 }
		i++;
    }
     printf("the total number of words are : %d ",wrd-1);
 }
