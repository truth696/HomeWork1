#include <stdio.h>
	
	int main () {
		
		int number1 = 0;
		int number2 = 0;
		int number3 = 0;
	
		printf("input tree num");
		scanf("%d" , &number1);
		scanf("%d" , &number2);
		scanf("%d" , &number3);
	
		printf ("Your number is %d" , number1 * 100 + number2 * 10 + number3 * 1);
		
		return 0; }	
