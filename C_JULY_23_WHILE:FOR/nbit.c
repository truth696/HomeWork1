#include <stdio.h>
		
	int main (){
	
		int number = 0;
		int shift = 0;
		int nwnumber = 0;

	printf ("Input number ");
	scanf("%d", &number);
	
	printf("Input number byte that you want chek ");
	scanf("%d", &shift);
	
	
	
	nwnumber =  number >> shift;
	
	if ( nwnumber ^ 1 ) {
		
		printf ("yes this byte will save 1 ");
	}
	else {
	
		printf ("this byte does not contain 1 ");
	}
	return 0; }
	

