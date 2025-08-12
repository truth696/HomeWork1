#include <stdio.h>
#define size 4
#define size2 8
void sort(int* number[size2]){
    int number1[size];
    int number2[size];
    int number3[size2];
    for (int c = 0 ;c < size2; ){
        for( int i = 0; c < size ; ){
            for ( int d = 0; d<size; ) {
                if (number1[i] >= number2[d]){
                    number3[c] = number1[i];
                     ++i; 
                     ++c;
                }else if( number2[d] >= number1[i]){
                     number3[c] = number2[d];    
                     ++d;
                     ++c;
            }
        }
    }
            
    }
}

int main () {
    int number1[size] = {};
    int number2[size] = {};
    int sum[size2];
    
    printf("Input %d number for first array\n" , size);
    
    for ( int i = 0 ; i < size; ++i){
        scanf("%d", &number1[i]);
    }
    
    printf("Input %d number for second array\n", size);
    
    for ( int i = 0 ; i < size ; ++i ){
        scanf("%d", &number2[i]);
    }
    
    sort(sum);
    for (int i = 0 ;i < size2 ;++i){
        printf("%d", sum[i]);
    }
return 0;}



//1 2 2 3
//1 3 4

//1 1 2 2 3 3 4 

//if (x < e) new_array[i] = x;
//else  new_array[i] = e;
