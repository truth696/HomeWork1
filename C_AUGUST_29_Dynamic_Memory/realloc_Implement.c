#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {    
    int n = 0; 
    int upp = 0;
    
    printf("Please input number for size\n");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));

    printf("Please input numbers for array\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    
    printf("Please input number for new size for array");
    scanf("%d", &upp);
    
    arr = realloc_my(arr, sizeof(int)*upp);
    
    printf("plz input %d number", upp - n);
    for (int i = n ; i < upp ; ++i) {
        scanf("%d ", &arr[i]);
    }    

    printf("\n");

    for (int i = 0; i < upp; ++i) {
         printf("%d ", arr[i]);
    }
    
    

return 0;
}
