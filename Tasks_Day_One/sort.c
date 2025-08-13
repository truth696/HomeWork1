#include <stdio.h>
#define n 4
#define s 8
void merge (int* arr, int* arr2, int* arr3){
    int i = 0;
    int v = 0;
    int j = 0;
    while (i < n && j < n){
        if(arr[i] >= arr2[j]){
            arr3[v] = arr2[j];
            ++v;
            ++j;
        }else{
            arr3[v] = arr[i];
            ++v;
            ++i;
        }
    }
    while ( i < n){
        arr3[v] = arr[i];
        ++v;
        ++i;
    }
    while ( j < n){
        arr3[v] = arr2[j];
        ++v;
        ++j;
    }

}
int main(){
    int arr[n] = {1 , 3 , 5 , 7};
    int arr2[n] = {2 , 4 , 6 , 8};
    int arr3[s] = {};

    merge (arr,arr2,arr3);
    
    printf("This is your sorted array:");
    for (int i = 0;i < s;++i){
        printf("%d ", arr3[i]);
    } 
return 0;
}
