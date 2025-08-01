#include  <stdio.h>
    int func_of_power( int b, int a) {
            int i = 0;
            int ret = 0;
            int res = 0;
        for (i = 0;  i < b ; i++) {
                a+=a;
                
        }
        ret = a;
        return ret;
      }
        
    int main(){
            int number = 0 ;
            int power = 0 ;
            int results = 0;    

            printf("Input your number ");
            scanf("%d", &number);
            printf("Input your power ");
            scanf("%d", &power);  
            
        
            results = func_of_power(power, number);
            
            if ( number == 2){
                         results/=2;
            } 

            printf("You number of power: %d\n", results);
    return 0;
    }

