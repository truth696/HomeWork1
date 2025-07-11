#include<stdio.h>

   int main(){
     int a = 0;
     printf("Pls input n:");
     scanf("%d" , &a);  

     int res  = 0;
	int x = 1<< a;
	res = 34 | x;
	printf("result: %d\n" , res);

   return 0;
   
   
   
   }
