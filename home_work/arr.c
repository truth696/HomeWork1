#include <stdio.h>
    
void recu (int *arr, int size) {
    if (size == -1) return; 
    recu(arr, size-1);
    printf("%d", arr[size]);
    
}

int main() {
    const int size = 3;
    int arr[size] = {1,2,3};
    
    recu(arr,size-1);
    
return 0;
}
