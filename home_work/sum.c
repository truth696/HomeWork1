#include <stdio.h>
    
int recu(int num) {
    if (num <= 9) return num;
    
    return recu(num / 10) + recu(num % 10);
}
    
int main() {
    
    int n = 444;
    
    int mtop = recu(n);
    
    printf("%d",  mtop);
    
return 0;
}
