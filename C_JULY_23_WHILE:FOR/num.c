#include <stdio.h> 
	
int main (){
	
	int num = 0;
	int res = 0;

	printf("Hii input num more 12 ");
	scanf("%d", &num);

	if (num > 12) {

		while (num != 0){
			
	
			res = res * 10 + num % 10;
			
			num/=10;
			
	} 
	printf ("Your num %d", res);
	
	}else {printf ("input num more 12");  
	}
	return 0;
	}
	
