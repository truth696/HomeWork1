#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    int n = 0; 

    printf("Please input your size for array:\n");
    scanf("%d", &n);
    
    int* arr = malloc(n * sizeof(int));
    int num = 0;
    
    arr = custom_calloc(n, num);

    for (int i = 0;i < n; ++i) {
         printf("%d\n", arr[i]);
     }
    printf("PLease input number for your size\n");
    for (int i = 0;i < n;++i) {
        scanf("%d", &arr[i]);
    }

    printf("Your numbers:\n");
    for (int i = 0;i < n; ++i) {
        printf("%d\n", arr[i]);
    }
 
return 0;   
}     
