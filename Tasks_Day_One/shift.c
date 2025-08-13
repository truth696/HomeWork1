#include <stdio.h>
#define n 7
int main(){ 
    int arr[n] = { 1, 2, 3, 4, 5, 6, 7};
    int k = 0;
    int tmp = 0;
    printf("Please input number for shift\n");
    scanf("%d", &k);
    
    for (int i = 0; i < k; ++i) {
        tmp = arr[n-1];
        for (int j = 0; j < n - 1; ++j) {
            int tmp1 = arr[j];
            arr[j] = arr[j+1];  
            arr[j + 1] = tmp;
        }
        arr[0] = tmp;
    
    } 
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
     
    
    
return 0;
}
