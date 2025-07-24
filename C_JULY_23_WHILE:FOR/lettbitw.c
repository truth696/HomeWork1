#include <stdio.h>
	
	int main (){
	
		char let[2] ="\0";
		
		printf("Input your letter");
		
		scanf ("%s", &let[1]);
		
		if (let[1]>=65 && let[1]<=90){
			
			let[1] = let[1]>>1;
		
			printf("Your letter %c", let[1]);
		}	
		else if (let[1]>=97 && let[1]<=125){
			
			let[1] = let[1] << 1;
			
		
			printf ("Your letter %c", let[1]);
		}
		else{
			
			printf ("This is not letter");
	
		return 0;
		}
		}
