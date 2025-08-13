#include <stdio.h>

#define n 8 

#define v 1000
void sort(int* arr){
    int tmp = 0;
    for(int i = 0; i < n;++i){
        for(int j = n-1; j != i;){
            if(arr[i] >= arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                --j;
            }else{
                --j;
            }
        }
    }
}
                
void similar( int *arrv ,int* arr){
            int i = 0;
            int j = 0;
              int x = 0; 
    for(j = 0; j < n;){
        if(arr[j] == arr[j+1]){
            ++j;
        }else{
            
            x = arr[i];
            arrv[x] = j - i + 1;
            ++x;
            i = j;  
            ++j;
            ++i;
        }
    }
    for ( int i  = 0; i < v;){
        if(arrv[i] != 0 ){
            printf("%d, repeated: %d\n", i, arrv[i]);
            ++i;
        }else{
            ++i;
        }

}
 
}
    
int main(){
    int arr[n] = {};
    int arrv[v] = {};
    
    printf("Please input %d numbers for array\n", n);
    for(int  i = 0; i < n ; ++i){
        scanf("%d", &arr[i]);
    }

    sort(arr);
    similar(arrv,arr);
return 0;
}
