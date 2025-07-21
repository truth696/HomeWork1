#include <stdio.h>


	int main(){
	int num = 0;
	int passed =0;
	printf("PLease input your num from 0 to 100");
	scanf ("%d", &num);
	if (num > 50){
	passed=num;
	printf("Your score less than half");
	}else{
	printf("Your score above half");
	}
	return 0;}	
