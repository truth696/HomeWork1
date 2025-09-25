#include <stdio.h>

void foo (int n, int i) {
    if (i <= 0) return;
    foo(n/2, --i);
    printf("%d ", n%2);
} 
int main() {
    int n = 23;
    int i = 32;
    foo(n, i);

return 0;
}
