#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {    
    int n = 0; 
    int upp = 0;
    int i = 0;    
    printf("Please input number for size\n");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));

    printf("Please input numbers for array\n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Please input number for new size for array\n");
    scanf("%d", &upp);

    arr = custom_realloc(arr, sizeof(int) * upp);

    if (upp <= n) printf("Your numbers :");
    else {
        printf("plz input %d number:\n", upp - n);
       /* for (int i = n; i < upp; ++i) {
            scanf("%d ", &arr[i]);
        }*/
        i = n;
        while (i < upp) {
            scanf("%d", &arr[i]);
            ++i;
        }    
    }

    for (i = 0; i < upp; ++i) {
         printf("%d ", arr[i]);
    }
    
    

return 0;
}
