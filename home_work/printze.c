#include <stdio.h>

void recu(int n) {
    if (n == -1) return;
    recu(n-1);
    printf("%d ",n);
}
    
int main() {
    int n = 12;
        
    recu(n);
return 0;
}   
