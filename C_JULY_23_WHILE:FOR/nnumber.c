#include <stdio.h>

	
	int main (){
		
		int number = 0;
		int shift = 0;
		int nwnumber = 0;
	
	
		printf("Input number");
		scanf("%d", &number);
	
	
		printf("enter the number of the cool place one");
		scanf("%d", &shift);
	
		nwnumber = number >> shift;
		
		nwnumber = nwnumber | 1;
		
		nwnumber = nwnumber << shift;
	
		nwnumber = number | nwnumber;
	
		printf("Your number with shift %d", nwnumber);
	
	return 0;
	}
