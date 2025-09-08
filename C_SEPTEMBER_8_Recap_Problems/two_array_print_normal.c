#include <stdio.h>

const int size = 3;

void scanf_array (int* arr1, int* arr2, int size) {
    printf("Please input numbers first for array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr1[i]);
    } 

    printf("Please input numbers second for array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr2[i]);
    }
}

void printf_array (int* arr1, int* arr2, int size) {
    for (int i = 0; i < size*2; ++i) {
        if (i <= 2 ) printf("%d ", arr1[i]);
        else  printf("%d ", arr2[i - size]);
    }
} 
int main() {
    int arr1[size],arr2[size];
    
    scanf_array (arr1, arr2, size);
    printf_array (arr1, arr2, size);
 
return 0;
}

