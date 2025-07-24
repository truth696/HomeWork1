#include<stdio.h>
  
   int main(){
       int a = 0;
       int b = 0;
      printf("Pls input a =");
      	scanf("%i" , &a);
      printf("Pls input b =");
     	scanf("%i" , &b);
        a = a+b;
        b = a-b;
 	a = a-b;
      printf("Your results is: a = %d b = %d \n" , a , b);
    return 0;
   
   
   }
