#include <stdio.h> 
    int fib(int n){
        if (n < 2 && n >=0){
            return n ;
        }
        return fib(n - 1) + fib(n - 2); 
        }   
    int main(){
        int num = 0; 
        int fibo = 0;   
        scanf("%d" , &num);
        fibo = fib(num);
        printf("%d", fibo);
    return 0;
    }
        
