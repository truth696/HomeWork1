#include <stdio.h>

const int size = 4;

void scanf_array (int* arr, int size) {
    printf("Please input number for array\n");
    for (int i = 0; i < size; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr[i]);
    }
}

void find_number (int* arr, int size, int number) { 
    int count;    
    for (int i = 0; i < size; ++i) {
        if (arr[i] == number) ++count;
    }
    
    (count >= 2) ? printf("Yes, your number repeats in the array") : printf("No, your number don't repeats in the array :(");
}

int main() {
    int arr[size], number;
    
    scanf_array (arr, size);
    
    printf("Please input number for chek: ");
    scanf("%d", &number);
    
    find_number (arr, size,number);

return 0;
}
    
         
