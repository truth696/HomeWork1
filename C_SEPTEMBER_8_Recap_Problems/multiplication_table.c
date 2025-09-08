#include <stdio.h>

void multiplication_table  (int number) {
    for (int i = 0; i <= 10; ++i) {
        printf("%d × %d = %d\n" ,i ,number, i*number);
    }
}
    
    
int main() {
    int number;
    
    printf("Please input number: \n");
    scanf("%d", &number);
    
    multiplication_table  (number);

return 0;
}
    
