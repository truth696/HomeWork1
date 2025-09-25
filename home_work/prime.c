#include <stdio.h>
	int prime( int num1){
		int res = 0;
		if ( num1 != 1){
		    for( int i = 1; i < num1; i++){
		    	if(num1 % i == 0){
       			       res++;
		    	}
		     }
		}
		return res;
	}
	
	int main(){
		int num = 0;
		printf("Input your number: ");
		scanf("%d", &num);
		int res = prime(num);
		if( res == 1){
		   printf("%d is prime \n", num);
		} else{
		   printf("%d in not prime \n", num);
		}
		return 0;
	}
