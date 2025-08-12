#include <stdio.h>
int justNum(int x){
    int res = 0;
    for ( int i = 2 ; i < x; i++){
        if ( x % i == 0){
            res = 1;
            res+=res;
        }
        
    }
   return res;
}

int main (){
    int number = 0;
    printf("Input number ");
    scanf("%d", &number);
    int res = justNum(number);
    if (res != 0){
        printf("Your number isnt simple, %d" , number);
    }
    else{
        printf("Your number is simple, %d" , number);
    }
return 0; 
}
