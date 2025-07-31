#include <stdio.h>
	
	int main () {
		
		int number1 = 0;
		float  number2 = 0;
		char number3 ='\0';
		float val =0;
		int *ptr1 = &number1;
		float  *ptr2 =&number2;
		char *ptr3 = &number3;
	
		printf ("Input first number ");
		scanf("%d" , &number1 );
		
		printf ("Input second number ");
		scanf("%f" , &number2 );
		
	
		printf ("Input thirt number ");
		scanf(" %c" , &number3);
		
		
		printf("Your address number 1 %p", ptr1);
		printf("\nYour address number 2 %p", ptr2);
		printf("\nYour address number 3 %p", ptr3);
	
	return 0; 
}
