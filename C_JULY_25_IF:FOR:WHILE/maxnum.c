#include <stdio.h>

	
	int main(){
	
		int number1 = 0;
		int number2 = 0;
		int number3 = 0;
		int exit = 0;
	
	printf ("Input number one ");
	scanf ("%d", &number1);

	printf ("Input number two ");
        scanf ("%d", &number2);
	
	printf ("Input number tree ");
        scanf ("%d", &number3);
	
	
	
	while (exit != -1 ) {
			
			if ( number1 > number2 && number1 > number3) {
				printf (" Your max num %d", number1);
			} 
	
			else if ( number2 > number1 && number2 > number3) {
				 printf (" Your max num %d", number2);
			}
		
			else if ( number3 > number1 && number3 > number2){
				 printf (" Your max num %d", number3);
			}
			else {
				
				printf("Input diff number");
			}
			
			 printf ("\nIf you want quit input -1");
                        scanf("%d", &exit);
		
	}
		return 0;
		

	}
