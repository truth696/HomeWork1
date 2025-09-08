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

void printf_array (int* arr1, int*arr2 , int size) {
    printf("This is your first array:");
    for (int i = 0; i < size; ++i) {
        printf("\n%d) ", i+1);
        printf("%d", arr1[i]);
    }
    
    printf("\nThis is your second array:");
    for (int i = 0; i < size; ++i) {
        printf("\n%d) ", i+1);
        printf("%d", arr2[i]);
    }   

}


int main() {
    int arr1[size], arr2[size];

    scanf_array (arr1, arr2 , size);
    printf_array (arr1, arr2 ,size);    

return 0;
}  
