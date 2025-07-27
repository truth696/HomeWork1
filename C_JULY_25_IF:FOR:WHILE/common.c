#include <stdio.h>
	
	int main () {
		
		int number1 = 0 ;
		int number2 = 0 ;
		int div = 0;
		int div2 = 0;
		int res = 2;
		
		printf("Hello input two number");
		scanf("%d" , &number1);
		scanf("%d" , &number2);
		
	while( res <= number1){
		if ( number1 % res== 0){
				div = res;
					while ( res <= number2){
							if( number2 % res == 0 ){
									 div2 = res ; 
									
									if ( div2 == div) {
										
										printf ("Your  common div %d", div2 );
									
										res = number1+number2;
										 }
		}
		}
		}else {
			res++;}}
		
		return 0;
}
				 
