 // Q WAP to calculate power of number.

 #include<stdio.h>

 void main()
 {
	int pow, num, i, ans ;
	
	printf("Enter the number : ");
	scanf("%d",&num);
	
	printf("Enter the power : ");
	scanf("%d",&pow);
	
	for(i=1; i<=pow; i++)
	{
		ans = ans * num ;
	}
	
	printf("%d to the %d is : %d",num,pow,ans);
 }
