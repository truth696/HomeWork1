#include <stdio.h>
	
	int main(){
		
		int number = 0;	
		int lost = 0;
	
		printf("input number");
		scanf("%d", &number);

		if ( number % 10 >= 5 ) {
			
				lost = number % 10;
				number +=1;
				
				
				printf("Your number %d" , number);	
		}

		else {
				lost = number % 10;
				number -=1;
		}		printf("your number %d" , number);
		return 0;
		 }
