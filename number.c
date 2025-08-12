#include <stdio.h>
    int sumNum(int x){
        int rec = 0;    
        int res = 0;
    for ( int i = 0; 1 <= x; i++){
            rec = x % 10;
            res +=rec;
            x /= 10;
        }
    return res;
}
int main (){
    int number = 0;
    printf("Input number ");
    scanf("%d" , & number);
    int res = sumNum(number);
    printf("Your sum : %d" , res);
return 0;
} 
