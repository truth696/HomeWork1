#include <stdio.h>
#include <stdlib.h>

void  recursive_func(int n) {
    if (n <= 0) return; 
    recursive_func(n / 10);
    printf("%d,", n % 10);
}
 
int main() {
    int n = 0;
    
    printf("PLease input number:\n");
    scanf("%d", &n);
    
    recursive_func(n);
      
return 0;
}
