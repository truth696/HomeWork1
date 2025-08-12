#include <stdio.h>
#define size 5 

int non_decreasing (int* arr){
    int result = 0;
    for (int i = 0;i < size-1; ++i){
        if ( arr[i] > arr[i+1]){
            return 1;
        }

    }
return 0;
}
            
int main() {
    int arr[size];
    
    printf("Please input %d numbers for array\n", size);
    
    for (int i = 0;i < size; ++i){
        scanf("%d", &arr[i]);
    }
    
    int result = non_decreasing(arr);
    
    if (result == 1){
        printf("false");
    }else{
        printf("true");
    }    
    
return 0;
}
