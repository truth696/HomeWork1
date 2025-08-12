#include <stdio.h>
#define size 5
void odd_and_even(int* arr){

    int j = size - 1;
    int i = 0;

    for (i = 0; i != j;){
        if (arr[i] %2 != 0) {
            int clone = arr[i];
            
            arr[i] = arr[j];
            arr[j] = clone;
            
            --j;
        }else{
            ++i;
        }
    }
}

int main (){
        int arr[size];
        printf("Please input %d numbers for array\n", size);

        for ( int i = 0 ; i < size ; ++i){
            scanf( "%d", &arr[i]);
        }       

        odd_and_even(arr);

        for (int i = 0; i < size; ++i){
            printf("%d ", arr[i]);
        }

return 0;
}

            
