					// Enter the 5 number from user and print the sum of odd number .
							// IDE used -> DEV C++
#include<stdio.h>

int main()
{
	int a[4] ,i , sum=0 ;
	
	printf("Enter the numbers: \n");
	
	for(i=0 ; i<5 ; i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]%2!=0)
		{
			sum = sum + a[i];
		}
	}
	printf("sum of odd numbers :%d ",sum);
}
