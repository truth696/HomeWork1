#include<stdio.h>
 
   int main(){
   	int a=0;
	int b=0;
	int c=0;
	float res=0;
	pirntf("Input your tree numbers");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	res = (a+b+c) / 3;
	printf("Total %i" , a+b+c);
	printf("Average %f", res);
 return 0;
   }

