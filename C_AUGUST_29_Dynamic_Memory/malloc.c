#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    
    printf("Please input number for array: ");
    scanf("%d", &n);
    
    int* arr = malloc(n * sizeof(int));
    
    printf("Please input numbers:\n");
    for (int i = 0;i < n;++i) {
      printf("%d. ", i+1);
      scanf("%d", &arr[i]);
    }
    
    printf("Your array size: %d\n", n);
    
    printf("Your numbers in array:\n");
    for (int i  = 0; i < n; ++i) {
        printf("%d. %d\n", i+1, arr[i]);
    }

    free (arr);

return 0; 
}
        
