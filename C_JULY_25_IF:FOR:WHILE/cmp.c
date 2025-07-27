#include <stdio.h>
	int main (){
	
	int number = 0;
	int ost = 0;
	int clone = 0;
	int win = 0 ;
	int ost2 = 0;
	
	printf ("Input num");
	scanf("%d", &number);
	
	clone = number;
	while (number>=0.1){
	
			ost=number % 10;
				
			number /=10;
			ost2 = number % 10;	
			
				if ( ost > ost2 ){
				
						win = ost;
							
					printf( "your num %d"  , win);
					  win  = 0;
				}
			
				else { 
						ost = ost2;
						
				 }}
	return 0 ; }
				
						
