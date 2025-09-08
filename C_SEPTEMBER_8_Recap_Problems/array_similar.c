#include <stdio.h>

const int size = 4;

void scanf_array (int* arr1, int*arr2 , int size) {
    printf("PLease input numbers for arr1:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("PLease input numbers for arr2:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr2[i]);
    } 
}

void chek_two_array (int* arr1, int* arr2, int size) {
    for (int i = 0; i < size;) {
        if (arr1[i] == arr2[i])  ++i;
        else {
            printf("Your array isn't similar :(");
            return;
        }   
    }
    printf("Your array is similar");
}

int main() {
    
    int arr1[size], arr2[size];
    
    scanf_array (arr1, arr2, size); 
    chek_two_array (arr1, arr2, size);
    
return 0; 
}
