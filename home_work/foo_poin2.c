#include <stdio.h>
#define n 3
typedef void (*func)(int x); 

void print_square(int x) {
    printf("Your res: %d\n", x*x);
}    

void print_double(int x) {
    printf("Your res: %d %d\n", x , x);
}

void for_each(int * arr , int size, void (*func)(int)) {
    for (int i = 0; i < size; ++i) {
        func(arr[i]);
    }
}

int main() {
    
    int res, choise, tmp;
    int arr[n] = {};
     
    func op  = NULL;
    
    printf("Please input numbers for array: \n");
    for (int i = 0; i < n; ++i) {
        printf("%d) ", i+1); 
        scanf("%d",&arr[i]);
    }
    
    printf("Please choose action: square - 1, double - 2\n");
    scanf("%d", &choise);
    
    if (choise == 1) op = print_square;
    else if (choise == 2) op = print_double;
    else printf("Please intpu correct number");
    
    for_each(arr , n, op);
    
 return 0;
    }
    
        
     
