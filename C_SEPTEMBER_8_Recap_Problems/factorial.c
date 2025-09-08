#include <stdio.h>

int fact (int number) {
    if (number <= 0) return 1;
    return fact(number - 1) * number;
}

int main() {
    int num;
    
    printf("Please input number:\n");
    scanf("%d", &num);
    
    printf("Your results: %d", fact(num));
    
return 0;
}

