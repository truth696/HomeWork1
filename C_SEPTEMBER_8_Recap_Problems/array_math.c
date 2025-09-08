#include <stdio.h>

const int size = 3;

void scanf_array (int* arr, int size) {
    printf("Please input numbers for array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr[i]);
    } 
}
void average_num (int* arr, int size) {
    float count;
    for (int i = 0; i < size; ++i) {
        count += arr[i];
    }
    printf("Your average number is : %f" ,count /= size);    
} 

int main() {
    int arr[size] = {};
    
    scanf_array (arr, size);
    average_num (arr, size);
    
return 0;
}
