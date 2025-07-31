#include <stdio.h>
	
	int main () {
		
		int i = 0 ;
		const int size = 0;
		
	
		
		char lett[size];
			
		printf("Input %d char for array:\n", size);
		
		for (i = 0 ; i < size ; i++ ){
		
			scanf(" %c", &lett[i]);
		}
		
		for (i = 0 ; i < size ; i ++){
		
			if ( lett[i] >= 48 && lett[i] <= 57)
				
				printf("Your num:%c", lett[i]);
		
		}
		return 0; }
		
