#include <stdio.h>


	int main () {
		int i = 0;
		int size = 0;
		int number[size];
		int res[size];
		int *ptr = &number[size];
		int *ptr2 = &res[i];
	
		printf("Input size ");
		scanf("%d" , &size);

		printf("Input %d number\n " , size);
		for ( i = 0 ; i < size ; i++){
			scanf("\n%d" , &number[i]);
			res [i] = number [i];
			 
		}

		for (i = 0; i < size ; i++){			

			printf("%d" ,*ptr2 );
			ptr2+=1;

			}		
	
		return 0;
		}
			
