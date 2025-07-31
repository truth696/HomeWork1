#include <stdio.h>
		
	int main () {
	
		const int size = 10;
		int number[size];
		int res[size];
		int s = 0;
		int i = 0 ;
		int j = 0;  
		int re = 0;
			
		printf("Input %d number\n", size);
		
		for ( i = 0; i < size ; i++ ) {
		
				scanf("%d", &number[i]);
		}
		
		
		for (re = 0; re  < size ; re++ ){
		
			
			if ( number [j] % 2 == 0) { 
			
					i = 0;
					
					
					if ( number [i] % 2 == 0 ) {
							
							i++;
						
					number[j] = number [i];
					}
					else {
						
						number[j] = number[i];
						
						
					}
					i++;
					
			}
			
			else { 
				
				s = 10;
				number [j] = number [s];
				s--;
			}
			
		}
		
		for ( i = 0 ; i < size ;  i++ ) {
			
			printf("Your array :%d", number[j]);
		
		}
				
	return 0;
	}
	
