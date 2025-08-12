#include <stdio.h>

void swap(int* number1, int* number2){
    int tmp = 0;
    tmp = *number1;
    *number1 = *number2;
    *number2 = tmp;
}

int main(){
    int num1 = 0;
    int num2 = 0;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    printf("Please input two number\n");
    printf("1. ");  
    scanf("%d", &num1);
    printf("2. ");
    scanf("%d", &num2);
    
    swap(ptr1 ,ptr2 );
    
    printf("Your number for swap:\n");
    printf("1. ");      
    printf("%d" ,*ptr1);
    printf("\n2. ");
    printf("%d" ,*ptr2);
    
return 0;}
    
