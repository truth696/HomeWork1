#include <stdio.h>
#define n 4
#define s 8
void sort_array(int* arr){
    for(int i = 0;i < n;++i){
        for (int j = n - 1; j != i;){
            if(arr[i] > arr[j]){
                int copy = arr[i];
                arr[i] = arr[j];
                arr[j] = copy;
                --j;
            }else{
                --j;
            }
        }
    }
}

void sort_two_array(int* arr, int* arr2, int* arr3){
    for(int v = 0; v < s;){
        for ( int i = 0; i < n;){
            for( int j = 0; j < n;){
                if(arr[i] >= arr2[j]){
                    arr3[v] = arr2[j];
                    ++j;
                    ++v;
                }else{
                    arr3[v] = arr[i];
                    ++i;
                    ++v;
                }
            }
        }
    }
}
int main(){
    int arr[n] = {};
    int arr2[n] = {};
    int arr3[s] = {};
    
    printf("Please input %d number for first array\n", n);
    for (int i = 0;i < n;++i){
        scanf("%d",&arr[i]);
    }
    
    printf("Please input %d numbers for second array\n", n);
    for (int i = 0;i < n;++i){
        scanf("%d", &arr2[i]);
    }
    
    sort_array(arr);
    sort_array(arr2);
    
    sort_two_array(arr,arr2,arr3);
    
    printf("This is your sorted array:");
    for (int i = 0;i < s;++i){
        printf("%d ", arr3[i]);
    } 
return 0;
}
