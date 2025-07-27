#include <stdio.h>


        int main () {
                int number = 0;
                int div = 0;
                int dis = 0;
                printf ("input number");
                scanf ("%d", &number);
	
	if ( number >= 0 ){
	
      	        while (div <= number){
                if(number % div == 0){
                                printf ( "%d  " , div);
                                div ++;
		}
                else {
                        div ++;
		} 
		}
		}

        return 0;}
                   
