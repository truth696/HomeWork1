#include <stdio.h>
#define n 5 
void find(int* arr){
    int res = 0;
    int resarr[n];
    for(int i = 0;i < n;++i){
        
        for( int c = n-1;c != i;){
                if( arr[i] == arr[c]){
                    res +=1;
                    resarr[i] = resarr[i] + res;
                    --c;         
                }else{
                    --c;
                }
            }
    printf("%d, repeated: %d\n" , arr[i], resarr[i]);   
    }
}
int main(){
    int arr[n];
    
    printf("Input %d numbers for array\n", n);
    for(int i = 0;i < n;++i){
        scanf("%d" , &arr[i]);
    }
    
    find(arr);
    
return 0;
}
