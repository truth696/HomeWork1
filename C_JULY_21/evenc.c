#include <stdio.h>

	int  main(){
	int num = 0;
	int is_even= 0;
	printf("Hello, please input num: ");
	scanf("%d", &num);
	if (num % 2 == 0){
		is_even=num;

	printf("Your number is even:");
	}else{
	printf("Your number is odd... sorry:(");
	}
 
	return 0;
	}
