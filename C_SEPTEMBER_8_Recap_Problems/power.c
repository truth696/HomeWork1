#include <stdio.h>

int foo_power (int number, int power) {
    int count = 1; 
    for (int i = 0; i < power; ++i) {
        count *= number;
    }
return count;
}


int main() {
    int num, power;
    
    printf("Please input number: ");
    scanf("%d", &num);
    
    printf("Please input power: ");
    scanf("%d", &power);
    
    printf("This is your result: %d", foo_power(num, power));
    
return 0;
}
    
