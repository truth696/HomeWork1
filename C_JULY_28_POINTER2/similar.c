#include  <stdio.h>
	
	int main () {
	
		const int size = 0 ; 
		int i = 0 ;
		int res = 0;
		

		int number[size];
		int number1[size];
		int number2[size];
		int numberres1[size];
		int numberres2[size];


		printf("Input %d number for n1:\n", size);
	
		for ( i = 0 ; i < size ; i++ ) {
			
			scanf("%d", &number1[i]);
	
			numberres1[i] = number1[i];
			
			
			
		}
		
		printf("Input %d number for n2:\n" ,size);
		
		for ( i = 0; i < size ; i++ ) {
		
			scanf("%d" , &number2[i]);
			
			numberres2[i] = number2[i];
			
		}
		
		for ( i = 0 ; i < size ; i++) {
	
			if ( numberres1[i] == numberres2[i]){
		
				res = numberres1[i] * numberres2[i];
	
				printf ("Your similar number for index %d results: %d * %d = %d \n", i+1, numberres1[i] , numberres2[i], res);
			
			}
			
		}
		return 0;}
				
		
		
