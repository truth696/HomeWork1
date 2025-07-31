#include <stdio.h>

 
   	    int main () {
	 
                 const int size = 0; 
                 int i = 0;
                 int chek = 0;
		 int autist = 0;
                 
                 int number[size];
                 
 
                 printf("Input %d number for array:\n", size);
                 
                 for ( i = 0 ; i < size ; i++) {
                 
                         scanf ("%d" , &number[i]);
                         
                 }
                 
                 printf("Input number: ");
                 
                 scanf("%d" , &chek);
                 
	            for ( i = 0 ; i < size ; i++ ){ 
	                 
                         if (  number[i] == chek ) {
                         
				autist = chek;
                                 
                          }
                        
		}
			if (autist != 0) {
				
				printf("Yes your number matched with array, number=%d", chek);
			}
			
			else {
					
				printf("No your number don't matched with array");
			}
			
                 return 0;
          } 
