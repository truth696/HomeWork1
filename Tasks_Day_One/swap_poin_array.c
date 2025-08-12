#include <stdio.h>
#define n 5
void swap(int *arr){
    int *first = arr;
    int *last = arr + n - 1;
    int tmp = 0;
    while ( first < last){
            tmp = *first;
            *first = *last;
            *last = tmp;
            ++first;
            --last;
            }
}
int main(){
    int arr[n];
    
    printf("Please input %d numbers for array\n", n);
    for(int i = 0; i< n ;++i){
        scanf("%d" ,&arr[i]);
    }

    swap(arr);
    
    for(int i =0; i< n; ++i){
        printf("%d", arr[i]);
    }

return 0;
}
