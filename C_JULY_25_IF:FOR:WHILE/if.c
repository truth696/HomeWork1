#include <stdio.h>
	
	int main () {
	
		int number1 = 0;
		int number2 = 0;
		int number3 = 0;
	
	printf("Input tree number");
	scanf("%d", &number1);
	scanf("%d", &number2);
	scanf("%d", &number3);	
		
	if ( number1 > number2 && number2> number3 && number1 > number3){
	
			printf("%d , %d, %d", number1, number2, number3);
	
	} else if ( number1 > number2 &&  number3> number2 && number1 > number3){
	
			printf("%d , %d, %d", number1, number3, number2);
	
	} else if ( number2 > number1 &&  number1> number3 && number2 > number3){

                        printf("%d , %d, %d", number2, number1, number3);
	
	} else if ( number2 > number1 &&  number3> number1 && number2 > number3){

                        printf("%d , %d, %d", number2, number3, number1);
	
	} else if ( number1 > number2 &&  number3> number2 && number3 > number1){

                        printf("%d , %d, %d", number3, number1, number2);	
	
	} else if ( number2 > number1 &&  number3> number2 && number3 > number1){

                        printf("%d , %d, %d", number3, number2, number1);
	}
	return 0;
	}
