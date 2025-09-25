#include <stdio.h>
int fib(int number){
    if (number == 1) return 1;
    if (number == 0) return 0;
    return fib(number-1) + fib(number-2);
}
              
int main() {
    int number = 0;
    
    printf("Please input index for fibo\n");
    scanf("%d", &number);

    int g = fib(number);
    
    printf("This is your number: %d", g);
} 
