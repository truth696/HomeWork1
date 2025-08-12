#include <stdio.h> 
    
    int main() {
            const int n  = 5;
            char c[n][n];
            for (int i  = 0; i < n ; i ++ ) {
                for ( int j = 0 ; j < n ; j ++ ){
                    if (j == 0 || j == n - 1 || i == 0 || i == n - 1){
                        c[i][j] = '*';
                    }else{
                        c[i][j] = ' ';
                    }
                 
                }

            }
            for (int  i = 0; i < n; i ++){
                for (int j = 0; j < n; j++){
                    printf("%c", c[i][j]);
                }
                printf("\n");
            }
            return 0;
    }
