#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    
    printf("Please input your size for array: ");
    scanf("%d", &n );
    
    float* arr = calloc(n, sizeof(float));
    
    printf("Please input numbers for array:\n");
    for (int i = 0; i < n;++i) {
        printf("%d) ", i+1);
        scanf("%f",&arr[i]);
    }
    
    printf("This is your array size: %d\n",n);
    
    printf("Numbers in array:\n");
    for (int i = 0; i <  n; ++i) {
        printf("%d. %f\n", i+1, arr[i]);
    }
    
    free (arr);

return 0;
} 
