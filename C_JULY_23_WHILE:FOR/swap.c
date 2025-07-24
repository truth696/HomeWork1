#include <stdio.h>	


int main (){
	
		int x = 0;
		int s = 0;	
		int swap = 0;
	
		printf ("Input fist number x =");
		scanf ("%d" , &x);
		
		printf ("Input second number s =");
		scanf ("%d", &s);
	
		swap = x|s;
		s = swap & x;
		x = swap | s;
		printf ("Printf x = %d\n", x );
		printf ("Printf s = %d", s );
	
		return 0;}
	

	
