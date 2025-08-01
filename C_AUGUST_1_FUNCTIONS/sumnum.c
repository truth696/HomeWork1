#include <stdio.h>
    
    int sum_of_digits (int number) {
            int sum = 0;
            int rem = 0;
        while (number){
            rem = number % 10;
            sum = sum + rem;
            number/=10;
        }
    return sum;
    }
    
    int main (){
        int number = 0;
        int res = 0;
        printf("Input number: ");
        scanf("%d", &number);
        res = sum_of_digits(number);
        printf("Your results: %d\n", res);
    return 0;
    }
