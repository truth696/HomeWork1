#include <stdio.h>
	
	int main () {
		int number = 0;
		int div = 0;
		int dis = 0;
		printf ("input number");
		scanf ("%d", &number);
		
		while (div < number){
		if(number % div == 0){
				printf ( "%d " , div);
				
				dis +=div;
				
				div ++;}
			
				
		else {
			
			div ++;
			}
			}
		
			if ( number  == dis  ){
				printf ("Your number is sover %d ", dis);}
			
	
			else { printf("Your number is't sover %d" , dis);}
	return 0;}
