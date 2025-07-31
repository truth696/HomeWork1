#include <stdio.h>

	int main () {
		
		char  c1 = '\0';
		
		char c2 = '\0';
		
		short sh = 0;
		
		int num = 0; 
	
		printf("Input word ");
		scanf (" %c" , &c1);
	
		printf("Input word ");
		scanf (" %c", &c2);
	
		printf("input number ");
		scanf (" %hd", &sh );
		
		num = c1 + c2 + sh;
	
		printf ("Res %d", num);

	return 0;
	}
