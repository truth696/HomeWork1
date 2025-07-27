#include <stdio.h>
	
	int main (){
	
		char let[4] ="\0";
		
		int sym = 0;
	
		char ran[4] = "\0";
	
		printf("Input your letter ");
		
		scanf ("%s", &let[1]);
		
		if (let[1]>=65 && let[1]<=90){
			
			sym  = let[1]>>1;
			
			
			
			printf("Your letter %c", sym);
		}	
		else if (let[1]>=97 && let[1]<=125){
			
			sym = let[1] << 1;
			
			
		
			printf ("Your letter %c", sym);
		}
		else{
			
			printf ("This is not letter");
	
		return 0;
		}
		}
