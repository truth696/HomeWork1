#include <stdio.h>
    
int fibo (int number) {
    if (number == 0) return 0;
    if (number == 1) return 1;
   return fibo(number-1) + fibo(number-2);
}


int main() {
    int number;
    
    printf("Please input number: ");
    scanf("%d", &number);
    
    printf("Your results : %d", fibo(number));

return 0;    
} 

