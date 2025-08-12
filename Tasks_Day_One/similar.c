#include <stdio.h>
#define n 5
#define s 4 

int chek_n(int* arr, int* arr2){
    int res = 0;
    for (int i = 0; i < n;){
        if( arr[i] == arr2[i]){
            ++i;
            res +=1;
        }else{
            res = 0;
            break;
        }
    }
return res;
}


int main(){
    int arr[n] = {};
    int arr2[n] = {};
    int result = 0;

    printf("Please input %d numbers for first array\n" , n );
    for (int i = 0;i < n;++i){
        scanf("%d" , &arr[i]);
    }
    
    printf("Please input %d numbers for second array\n" , n );
    for(int i = 0;i < n;++i){
        scanf("%d" , &arr2[i]);
    }

    result = chek_n(arr,arr2);

    if(result != 0){
        printf("Your arrays are same :)");
    }else{
        printf("Your arrays are diff :(");
    }
return 0;
}
