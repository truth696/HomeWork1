#include <stdio.h>
#define n 5
void shift(int* arr, int k){
    int arr_copy[n];
    int j = n - k - 1;
    int i = n - 1;
    int c = k - 1;
    for(int i = 0;i < n;++i){
        arr_copy[i] = arr[i];
    }
    for(; c < i;){
        for(; i != j-1 ; ){
            for(; i != j - 1;){
            arr[i] = arr[c];
            arr[c] = 0;
            --c;
            --i;
        }
    }
}
//23456789 k=3
//01234567
   //cj  i
   //23n56
   for(int i = k; i < n ;++i){
       for(int j = 0;j < n;++j){
            if(arr[j] == 0){
                arr[j] = arr_copy[i];
                ++j;
                ++i;
            }
        }
    }
}
int main(){
    int arr[n] = {};
    int k = 0;

    printf("Please input %d numbers for array\n", n);
    
    for(int i = 0;i < n;++i){
        scanf("%d" , &arr[i]);
    }
    
    printf("Please input number for shift\n");
    scanf("%d", &k);
    
    
    shift(arr,k);
    
    printf("Your new array:");
    for(int i = 0;i < n; ++i){
        printf("%d", arr[i]);
    }
    
return 0;
}
