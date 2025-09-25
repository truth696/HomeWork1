#include <stdio.h>

void print(int num) {
    if (num == -1) return;
    printf("%d ", num);
    print(num-1);
}

int main() {
    
    int num = 12;
    
    print(num);

return 0;

}
