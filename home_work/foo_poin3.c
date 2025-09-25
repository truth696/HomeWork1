#include <stdio.h>
#define n 5 

int ascending(int a, int b) {
    return a > b;
}

int descending(int a, int b) {
    return a < b;
}

typedef int (*operation) (int a, int b); 

void apply (int* arr, int size, operation op) {
    for (int i = 0; i < n; ++i) {
        for (int j = size - 1; j != i; --j) {
            if (op(arr[i], arr[j])) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%d, ", arr[i]);
    }
}

int main() {
    int arr[n] = {};    
    int choise;
    operation op = NULL;
    
    printf("Please input numbers for array: \n");
    for (int i = 0; i < n; ++i) {
        printf("%d) ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Please input action: ascending sort - 1, descending sort - 2\n");
    scanf("%d", &choise);
        
    if (choise == 1) op = ascending;
    else if ( choise == 2) op = descending;
    else printf("Please input correct num");
    
    apply(arr, n, op);

return 0;
}
