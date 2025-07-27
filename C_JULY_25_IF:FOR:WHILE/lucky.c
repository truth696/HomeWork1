#include <stdio.h>
		
	int main () {
		
	int number = 0;
		
	int res = 0;
	
	printf (" Input number " );	
	
	scanf ("%d" , &number);
	
	if ( number >0){
	while ( number <=0 ){
		
		 res =  number % 10;
                 
		 
		
		if ( res == 7 | res == 4){
					
				printf("Your number is lucky");
		 }
		
	
		number /= 10; 
		
		continue; 
		
		}
		}else {
                printf("your num lusku");}

                	
	return 0;
}
