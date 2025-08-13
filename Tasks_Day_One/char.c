#include <stdio.h>
#define n 5 

void find_number(char* arr){
    for (int i = 0;i < n;){
        if(arr[i] >= '0' && arr[i] <= '9'){
            printf("%c ", arr[i]);
            ++i;
        }else{
            ++i;
        }
    }
}

int main(){
    char arr[n]; 
    
    printf("Please input %d element for array\n", n);
    
    for(int i = 0;i < n;++i){
        scanf(" %c", &arr[i]);
    }
    
    find_number(arr);

return 0;
}

    
        
