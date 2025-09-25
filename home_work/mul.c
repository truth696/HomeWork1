#include <stdio.h>
//int mul (int num){
  //  int i = 0;
   // int res = 1;
   // int ref = 0;
  // for ( i = 0; i <num; i++){
    //    ref = num %10;
      //  num /=10;
       // res = res * ref;
   // }
// return res;}
int recurs (int num){
        if ( num < 10 ){
            return num;
        }

      return  recurs(num / 10) * recurs(num % 10);
}
int main(){
    int x = 0;
    printf("Input number: ");
    scanf("%d" , &x);
    int res = recurs(x);
    printf("%d", res);
return 0;
}
