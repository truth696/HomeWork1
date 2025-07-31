#include <stdio.h>
	
	int main () {
	
		int number1 = 1;
		
		char *ptr1 =(char*) &number1 ;
		
	
		if ( ptr1[0] != 0){
			
			printf("little - endian");
		}

		else {
			printf("big - endian");
		}
		
	return 0;
	}
		
