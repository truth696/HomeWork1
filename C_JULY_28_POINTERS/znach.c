#include <stdio.h>
	
	int main () {
		
		int number = 0;
		int *ptr1 = &number ;
	
		printf ("Input number" );
		scanf ("%d" , &number);
	
		printf("Your number %d" , *ptr1);

	return 0; }
