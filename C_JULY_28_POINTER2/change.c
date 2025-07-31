#include <stdio.h>

	int main () {
	       
		const int size = 0;
		
		int i = 0;
		
	
		float res1[size];
	
		int number[size];	
	
		printf("Input %d number \n", size );		
	
		for( i = 0 ; i < size ; i++){

			scanf("%d" , &number[i]);
	
			res1[i] = number[i];	
		}
	 	
		for (i = 0 ; i < size ; i++){
		
			res1[i] = res1[i] / size;
			
			printf("%f" , res1[i]);

		}				
		
	
	return 0; }
