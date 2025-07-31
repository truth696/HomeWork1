#include <stdio.h>
	
	int main(){
		
		const int size = 10;
		int i = 0;
		int number[size];
		int res[i];
		int res1 = 0; 
		int res2 = 0;
		
		printf("Input 10 number for array:\n");
		
		for (i = 0; i < size ; i++){
	
			scanf("%d", &number[i]);
		
		}
		int max =  number [ 0 ];
                int min = number [ 0 ];
		
		for (i = 0; i < size ; i++){
				
				if ( number[i] > max) {
					
					
					max  = number[i];
					
					for ( i = 0; number[i] != max ; i++){
						
						res1 = i ; 
					}
					
					
				
				}
				
				if ( number[i] < min)  {
				
					min = number[i] ;
				
					for (i = 0 ; number[i] != min ; i++){ 
					
						res2 = i;
					}
				}
			
			
		}
		res1 = res1-res2;
		printf("Your results :%d" , res1 );
               
	
		return 0;
		}
				
						
