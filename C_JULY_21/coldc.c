#include <stdio.h>
	
	int main(){
	int temperature = 0;
	int is_cold=0;
	printf("PLease input your outside temperature: ");
	scanf("%d", &temperature);	
	if (temperature < 15) {
	 is_cold= temperature;
	printf("\nThis is so cold");
	}else{
	printf("\nThis is normal");
	}
	return 0;}
