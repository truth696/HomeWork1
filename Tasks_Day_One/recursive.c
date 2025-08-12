#include <stdio.h>
void fibo(int n){
    int i = 0;
    int c = 1;
    int v = 0;
    int res = 0;
    for( v = 1; v!= n;){
        res = i +c;
        i = c;
        c = res;
        ++v;
    }
    printf("Your number: %d",i);
    if( n < 1 ){
        return 0;
    }
    else{
        fibo(n-1) + fibo(n);
}
int main(){
    int index = 0;
    printf("Please input index\n");
    scanf("%d",&index);
    
    fibo(index);
    
return 0;
}
                
