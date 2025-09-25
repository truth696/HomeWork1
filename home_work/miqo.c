#include <stdio.h>

int main() {
    const int n = 5;
    int arr[n] = {};
    int j = n - 1;
    int i = 0;

    printf("PLease input numbers for array: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }    
   
    
    while (i < j) {
        if (arr[i] % 2 != 0) {
            int tmp  = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            --j;
        } else  ++i;
    }

     for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
    
return 0; 
}    
