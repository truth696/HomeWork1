#include <stdio.h>
	
	int main (){	

		int num2= 0;
		int num = 0;
		int exp = 0;
		int num3= 0;
		printf ("Input the power of 2 ");
		scanf ("%d", &num2);
		printf ("input num ");
		scanf ("%d", &num);
	
	
		exp = 2<<( num2-1);
			
		num3 = num << num2; 
		num = num >> num2;
	
		printf ("your power of 2%d" ,exp);
		printf ("\nумножение %d", num3);
		printf ("\nделение %d", num );






	return 0; 
	}
