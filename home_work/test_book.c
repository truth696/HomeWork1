#include <stdio.h>
#include "head.h"
const int n = 2;

int main() {
    int arr[n] = {1,2};
        
    int res = sum(arr, n);
    
    printf("%d", res);

return 0;
}
