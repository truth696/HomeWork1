#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int upp = 0;

    printf("Please input size for array:\n");
    scanf("%d", &n);
    
    int* arr = malloc(n * sizeof(int));
    
    printf("Please input numbers for array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Please input for how long\n");
    scanf("%d", &upp);
    
    int* new_arr = realloc(arr, (upp+n) * sizeof(int));
    
    printf("PLease input %d numbers for array\n", upp);
    for (int i = n;i < upp+n; ++i) {
        printf("%d) ",  i+1);
        scanf("%d", &new_arr[i]);
    }
    
    printf("Your size of new array: %d\n", n+upp);

    free (arr);
    free (new_arr);
    
return 0;
}
