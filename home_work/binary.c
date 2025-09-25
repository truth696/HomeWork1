#include <stdio.h>
    
void recu(int num) {
    if (num <= 0) return;
    
    recu(num/2);
    
    printf("%d ", num%2);
}

int main() {
    int num = 8;
    
    recu(num);

return 0;
}
