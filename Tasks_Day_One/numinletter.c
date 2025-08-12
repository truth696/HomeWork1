#include <stdio.h>
#define n 5 

int find_number(int* arr, int target){
    int res = 0;
    for(int i = 0;i < n;){
        if (arr[i] == target){
            res = 1;
            i = n;
        }
        else{
            ++i;
        }
    }
return res;
}

int main(){
    int arr[n] = {};
    int target = 0;
    int result = 0;
    
    printf("Please %d input numbers for array\n", n);
    
    for(int i = 0;i < n;++i){
        scanf("%d", &arr[i]);
    }
    
    printf("Please input number that need to find in array\n");
    scanf("%d", &target);
    
    result = find_number(arr,target);
    
    if(result == 0){
        printf("Array hasn't this number :(");
    }else{
        printf("Yes array has this number :)");
    }
return 0;
}
