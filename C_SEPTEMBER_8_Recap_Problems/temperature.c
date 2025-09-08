#include <stdio.h>

int change_temperature (int temp) {
    return (temp*9/5 ) + 32;
}
 
int main() {
    int number = 0;
    
    printf("Please input temperature in Celsius: ");
    scanf("%d", &number);
    
    printf("This your temperature\n in Celsius: %d\n in Fahrenheit: %d\n", number , change_temperature(number));

return 0;
}
