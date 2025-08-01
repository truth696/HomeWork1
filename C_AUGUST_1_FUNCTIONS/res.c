#include <stdio.h>

int reves( int num){
        int i = 0;
        int max = 10;
        int ret[i];
        int vr[max];
        int sr[i];
        int c = 0;
        int res[i];
        for (i = 0; i < 10; i++){
                vr[max] = sr[i]; 
                res[i] = vr[max];
                max--;
        }
        return res[i];
      }  
        
int main(){
             int  size = 10;
            int number[size];
            int i = 0;
            int b = 0;
            int result[i];
            printf("Input 10 number fo array: ");
            
            for (i=0; i < 10; i++){
                scanf("%d" , &number[i]);
            }
    
            result[i] = reves( number[i]);
            
            int c = 10;
            for (i = 9; i>=0 ;i-- ){
                printf("Your array %d\n" , result[i]);
                ;
             }
return 0;
    }
