 #include<stdio.h>
 
 // Q. Program to convert days to year-months-days.

 int main()
 {
 int days , year ,month , day ;

 printf("Enter the number of days : ");
 scanf("%d",&days);

 year  = days / 365 ;
 days  = days - (year * 365);
 month = days / 30 ;
 day   = days - (month * 30);

 printf("%d year  %d month  %d day", year ,month ,day);
 }
