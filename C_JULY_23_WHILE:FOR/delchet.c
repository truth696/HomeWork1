#include <stdio.h>
	
	int main (){
		
		   
        int x = 0;
        int x2 = 0;
        int x3 = 0;

        printf ("Input number ");
        scanf("%d",&x);

        x2= x & ( x - 2 );

        if (x2==0) {
                printf("yes it is a power of for ");
        }
        else{
                printf("number not power of for");
        }
        return 0;
        }
						
