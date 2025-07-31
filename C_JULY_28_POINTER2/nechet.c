#include <stdio.h>
	
	int main() {

		const int size = 10;
		int i = 0;;
		
		int number[size];
			
		printf("Input %d number for array:\n" , size);
		
		for ( i = 0 ; i < size ; i++){
		
			scanf("%d" , &number[i]);
		}
		
		for ( i =0 ; i < size ; i++){
			
			if ( number[i]%2 != 0){
			
				printf("Your odd number: %d\n", number[i]);
				}
			}
		
		return 0;}
