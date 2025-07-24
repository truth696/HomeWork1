#include <stdio.h>
	int main(){
		int num = 0;
		int act = 0;
		int num2 = 0;
		char quit[2] ="\0";
		int res = 0;	
		char let[2]= "\0";
		
		while (quit[1] !='q'){
			
			printf("\ninput first number ");
                	scanf("%d", &num);

               		printf("input second number ");
                	scanf ("%d", &num2);

		
			
                	printf ("\nInput action 1 = +, 2 = -, 3 = /, 4 = *\n");
                	scanf ("%d", &act);
	
			if (act == 1){
				
				res = num + num2 ;
				
				printf("\nYour results %d", res);
				}
			else if ( act == 2) {
				
				res = num - num2;
			
				printf("\nYour result %d", res);
				}
			else if ( act == 3) {

                                res  = num / num2 ;

                                printf("\nYour result %d", res);
                                }  
			else if ( act == 4) {

                                 res = num * num2; 

                                printf("\nYour result %d", res);
                                } 
				
			
				scanf("%c",&let[0]);
				
			 printf ("\nif you want quit input q");
				quit[1]=0;
                                scanf("%c", &quit[0]);
				
}
				 
				
		return 0;
}	
