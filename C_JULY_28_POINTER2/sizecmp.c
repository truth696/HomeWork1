#include <stdio.h>

	
	int main (){

		const int size = 0;	

		int number[size] ;	
	
		
		printf("Input %d numbers\n", size);
		for (int  i = 0  ; i  < size ; i++ ){
				
				scanf ("%d" , &number[i]);  
			}
		int max= 0;
                int min= 0;	
		for (int i = 1; i < size ; i++){
		
			if ( number[i] > number[max]) {
				
				max = i;
			}
			if ( number[i] < number[min]){
			
		 		min = i;
			}
			}
		printf("max :%d", max + 1 ) ;
		printf("\nmin :%d", min + 1);
				
		return 0; }
