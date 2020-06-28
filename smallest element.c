// To find smallest element in array .
// IDE used DEV C++

 #include<stdio.h>

int main()
{
	int a[10] , small , i , j , pos ;
	
	printf("Enter the elements \n");
	for(i=0 ; i<=4 ; i++)
    {
       scanf("%d",&a[i]);
	}
    
    small = a[0] ;
    pos = 0 ;
    
    for(i=1 ; i<=4 ; i++)
    {
      if(small > a[i])
      {
      	small = a[i];
      	pos   = i ; 
	  }
    }
    
    printf("\nThe smallest number is : %d ",small);
    printf("\nThe position is : %d", pos+1);
}
