#include <stdio.h>


void recu(int* arr, int size, int max, int min) {
    
    if (size == -1){
        printf("max : %d\n", max);
        printf("min : %d", min);
        return;
    }

    if (*arr > max) {
        max = *arr;
    }
    if (min > *arr) {
        min = *arr;
    }
    
    recu(arr + 1, size-1,max,min);
}

/*int main() {

    const int size = 4;
        
    int arr[size] = {1,2,3,4};
    int max = 1;
    int min = 1;
    recu(arr, size-1, max, min);

return 0;
}*/
int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Передаём первый элемент массива как начальные max и min
    recu(arr, size - 1, arr[0], arr[0]);

    return 0;
}
    
