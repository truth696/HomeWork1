#include <stdio.h>
    
void rec (int *arr,int size) {
    if (size == -1) return;
    printf("%d ", arr[size]);
    rec(arr, size-1);
}

int main() {    
    const int size = 3;
    
    int arr[size] = {1,4,3};
    
    rec(arr,size-1);
return 0;

}
