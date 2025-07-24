#include<stdio.h>

   int main(){
	int a = 0;
	int b = 0;
   	printf("Please input x :");
  	scanf("%d" , &a);
   	printf("Please input y:");
	scanf("%d" , &b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;	

   
    printf("Your results is:\n  x = %i\n  y = %i \n" , a ,b);
    return 0;
   
   
   }

