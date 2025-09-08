#include <stdio.h>

int numIsPolindrom(int number) {
    int tmp = 0;

    while (number > 0) {
        tmp += number % 10;
        
        if (number > 9) tmp *=10;
        number /=10;
    }

return tmp;
}
    
    
int polindrom(int number) {
    int tmp = 0, cpy = number ;

    while (tmp != cpy) {
        tmp = polindrom_num (number);
        if (tmp == cpy) return tmp;
        
        else {
            cpy += tmp;
            number = cpy;
            tmp = 0;
        }
    }
return 0;
}

int main() {
    int number = 0;
    
    printf("Please input number:\n");
    scanf("%d", &number);
    
    printf("%d", polindrom (number));

return 0;
}    
    
