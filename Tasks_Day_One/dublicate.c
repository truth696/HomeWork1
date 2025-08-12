#include <stdio.h>
#define n 5
void similar(int* arr){
    for(int i = 0;i < n;++i){
        for(int j = n-1;j != i;){
            if(arr[i] != arr[j]){
                --j;
            }else{
                arr[j] = 0;
                --j;
            }
        }
    }
}

int main(){
    int arr[n] = {};
    
    printf("Please input %d numbers for array\n", n);
    
    for(int i = 0;i < n;++i){
        scanf("%d", &arr[i]);
    }
    
    similar(arr);
    
    printf("Your new array without duplicates:");
    for(int i = 0;i < n;++i){
        if(arr[i] == 0){
            ++i;
        }else{
            printf(" %d", arr[i]);
        }
    }

return 0;
}
