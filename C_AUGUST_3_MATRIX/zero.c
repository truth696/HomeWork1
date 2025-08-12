#include <stdio.h>
#define size 8

void zeros_to_end(int* arr){
        int i = 0;
        for (int j = size - 1; i <= j; ){
            if (arr[i] == 0) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
                --j;  
            } else {
                ++i;
            }
        }        
}

int main() {
    int arr[size] = {};
    printf("Please input your numbers %d times:\n" , size);

    for (int i = 0; i < size; ++i){
        scanf("%d" , &arr[i]);
    }

    zeros_to_end(arr);

    for (int i = 0; i < size; ++i) {
        printf("%d " , arr[i]);
    }

    return 0;
}
