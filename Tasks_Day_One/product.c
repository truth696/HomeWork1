#include <stdio.h>
#define n 3 

int multiplication(int first, int second){
    int result = first * second;

return result;
}

int main(){
    int arr[n][n] = {};{} ;
    int i = 0;
    int j = 0;

    printf("Please input %d numbers for matrix\n" , n*n);
    
    for( i = 0;i < n;++i){
        for( j = 0;j < n;++j){
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Please input the first number index\n");

    printf("line: ");
    scanf("%d", &i);

    printf("row: ");
    scanf("%d", &j);
    
    int first_number = arr[i-1][j-1];
    
    i = 0; 
    j = 0;

    printf("Please input the second number index\n");
    
    printf("line: ");
    scanf("%d", &i);
    
    printf("row: ");
    scanf("%d", &j);
    
    int second_number = arr[i-1][j-1];
    
    int result = multiplication(first_number, second_number);
    
    printf("Your result: %d", result);
    
return 0;
}
