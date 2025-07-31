#include <stdio.h>
	
	int main () {
		
		int number1 = 0;
		int number2 = 0;
	
		int *ptr1 = &number1;
		int *ptr2 = &number2;
	
		printf("Input first number ");
		scanf("%d" , &number1);
	
		printf("Input second number ");
		scanf("%d" , &number2);

		printf("Your sum %d" , *ptr1 + *ptr2);
		printf("\nYour diff %d" , *ptr1 - *ptr2);

	return 0 ;	
}
