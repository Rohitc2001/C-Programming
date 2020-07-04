 #include<stdio.h>

 // Program to convert seconds into hrs-min-sec .

 void main()
 {
	int time , hrs , min , sec ;
	
	printf("Enter no of seconds : ");
	scanf("%d", &time);
		
	hrs  = time / 3600 ;
	time = time - (time * hrs) ; 
	min  = time / 60 ;
	sec  = time - (min * 60 );
	
	printf("%d hour  %d minutes  %d seconds" ,hrs, min,sec);
 } 
