 #include<stdio.h>

 // write a program to break entered money amount into 2000 , 500 , 100 ... rupee notes.

 int main()
 {
	int  total , amt ;
	
	printf("enter amount : Rs ");// enter amount .
	scanf("%d",&amt);
	
   // every time total will change
	 total = amt / 2000 ; 
	 amt = amt - (total * 2000);
	 printf("\n2000 note : %d",total);
	 
	 total = amt / 500  ; 
	 amt   = amt - (total * 500 ); 
	 printf("\n500 note : %d",total);
	 
	 total = amt / 100  ; 
	 amt   = amt - (total * 100 ); 
	 printf("\n100 note : %d",total);
	 
	 total = amt / 50 ; 
	 amt   = amt - (total * 50 ); 
	 printf("\n50 note : %d",total);
	 
	 total = amt / 20  ; 
	 amt   = amt - (total * 20 ); 
	 printf("\n20 note : %d",total);
	 
	 total = amt / 10  ; 
	 amt   = amt - (total * 10 ); 
	 printf("\n10 note : %d",total);
	 
	 total = amt / 1  ; 
	 amt   = amt - (total * 1 ); 
     printf("\n1 note : %d",total);
 }
