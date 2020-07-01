 #include<stdio.h>

 // Find the greatest integer.
 // IDE used -> DEV C++

 void main(){

  	int integer_a , integer_b ; // variables

	  printf("Find the greatest integer\n");

	  printf("\nenter integer_a : ");
	  scanf("%d",&integer_a);

	  printf("enter integer_b : ");
	  scanf("%d",&integer_b);

	 if(integer_a > integer_b)
      	 {
  	 	printf("\ninteger_a is greater");
  	 }
  	 else if(integer_a == integer_b)
    	 {
	 	printf("\nBoth intergers are equal");
	 }
  	 else
    	 {
	  	printf("\ninteger_b is greater");
	 }
 }
