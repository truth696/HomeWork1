#include <stdio.h>

void multiplication_table () {
    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j <= 10; ++j) {
            printf("%2d × %2d = %2d  " ,i ,j, i*j);
        }
    printf("\n");
    }
}
    
int main() {
    multiplication_table ();


return 0;
}
