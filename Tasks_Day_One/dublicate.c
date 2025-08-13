#include <stdio.h>

#define n 8
void sort(int* arr){
    int tmp = 0;
    for(int i = 0; i < n;++i){
        for(int j = n-1; j != i;){
            if(arr[i] >= arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                --j;
            }else{
                --j;
            }
        }
    }
    //for(int i = 0; i < n; ++i){
      //  printf("%d" , arr[i]);
//}
}
                
int similar(int* arr, int v){
            int i = 0;
            int j = 0;
             v = 0; 
    for(j = 0; j < n;){
        if(arr[j] == arr[j+1]){
            ++j;
        }else{
            i = j;
            ++j;
            arr[v] = arr[i];
            ++v;
        }
    }
return v;
}

int main(){
    int arr[n] = {};
    int max = arr[0];
    
    printf("Please input %d numbers for array\n", n);
    for(int  i = 0; i < n ; ++i){
        scanf("%d", &arr[i]);
    }

    sort(arr);  
    max = similar(arr, max);
    
    printf("Your new array without duplicates:");
    for(int i = 0;i < max;++i){
            printf(" %d", arr[i]);
    }
return 0;
}
