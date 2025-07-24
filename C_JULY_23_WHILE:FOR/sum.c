#include <stdio.h>
	int main (){
	int num = 0;
	int res = 0;
	int sum = 0;
	printf("input num ");
	scanf("%d",&num);
	while (num != 0){
	res = num % 10 ;
	sum += res;
	num /=10;
	continue; 
	printf ("Your res %d", sum);
	}
	return 0;}
