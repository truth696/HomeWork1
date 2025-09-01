#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 0; 
    int c = 0;
    
    printf("Please input number for row");
    scanf("%d", &r);
    
    printf("Please input number for column");
    scanf("%d", &c);
    
    int* arr = malloc(r * sizeof(int));
    int* arr1[r] =  malloc(c *sizeof(int));
    
    for (int i = 0;i < c;++i) {
        for (int j = 0;j < r;++j) {
            printf("PLease input number for [%d][%d]:\n", i, j);
            scanf("%d", &arr1[j][i]);
        }
    }
    
    printf("This is your size: %lu\n", sizeof(arr));
    
    printf("Your number is:\n");

    for (int i = 0;i < c;++i) {
         for (int j = 0;j < r;++j) {
             printf("[%d][%d]: %d\n", i, j, arr[i][j]);
         }
     }
return 0;

}
