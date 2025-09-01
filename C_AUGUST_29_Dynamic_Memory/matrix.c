#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 0; 
    int c = 0;
    
    printf("Please input number for row\n");
    scanf("%d", &r);
    
    printf("Please input number for column\n");
    scanf("%d", &c);
    
    int** matrix = (int**) malloc(r * sizeof(int*));
      
    
    for (int i = 0; i < r; ++i) {
        matrix[i] = (int*) malloc(sizeof(int) * c);
        if (matrix[i] == NULL) {
            for (int j = i-1; j >= 0; --j) free(matrix[j]);
        }
    } 

    
    for (int i = 0;i < r;++i) {
        for (int j = 0;j < c;++j) {
            printf("PLease input number for [%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i >= j) matrix[i][j] = 0;
        }
    }
    printf("This is your size: %lu\n", sizeof(matrix));
    
    printf("Your number is:\n");

    for (int i = 0;i < r;++i) {
         for (int j = 0;j < c;++j) printf("%d", matrix[i][j]);
        printf("\n");
     }
return 0;

}
