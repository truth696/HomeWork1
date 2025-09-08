#include <stdio.h>

int number_foo (int number) {
    if (number < 9) return number;
    
    return number_foo(number % 10) + number_foo(number / 10);
}

int main() {
    int num;
    
    printf("PLease input number: ");
    scanf("%d", &num);
    
    printf("This is your result: %d", number_foo(num));

return 0;
}
