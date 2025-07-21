#include <stdio.h>

		int main(){
	int a=0;
	int is_positive_and_even =0;
	printf("input num ");
	scanf("%d",&a);
	if (a * -1 < 0 && a%2==0){
	is_positive_and_even = a;
	printf("Your num even and possitiv");
	}else {
	printf ("Input other num");
	}
	return 0;}
