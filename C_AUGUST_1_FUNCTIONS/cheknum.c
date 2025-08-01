#include <stdio.h>

int just_number (int random) {
    int ret = 0;
    int i = 0;
    int ost = 0;
    int results = 0;
    for ( i = 1; i < random ; i++){
            
            if (random % i == 0 ){
                    ret ++;
            }
            
    }
        results  = ret;
    return results;
    }
    
        


int main (){
    int number = 0;
    int suf = 0;
    printf("Input number: ");
    scanf("%d", &number);
    suf = just_number(number);
    if ( suf == 1   ){
            printf("Your number is  prime");
    } else{

        printf("Your number is not prime");
    }
    return 0;
           }     
         
