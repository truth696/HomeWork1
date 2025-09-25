#include<stdio.h>

		int main(){
		printf("Input your num for a for b");
		int a = 0;
		int b = 0;
		scanf("%d", &a);
		scanf("%d", &b);
		a = a^b;
		b = a^b;
		a = b^a;
		
		
		printf("%d" , a ) ;
		printf("\n%d" , b );


		return 0;}
