#include <stdio.h>
    int main(){
            const int size = 5 ;
            int number[size];
            int c = size;
            int i = size;
            printf("input %d number\n" , size);
            for (i = 0 ; i < size ; i ++) {
                scanf("%d", &number[i]);
            }
            for ( c = 0; c < size ; c++){
                for ( i = c + 1 ; i < size ; i++){
                    if(number[c] == number[i]){
                        number[c] = 0; 
                    }   
                }
            }
            for (c = 0; c < size ; c++) {
                if (number[c] != 0) {
                    printf("%d " , number[c]);
                }
            }
        return 0;
    }
                        
                
                        
