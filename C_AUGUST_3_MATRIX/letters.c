#include <stdio.h>
#define n 4
int find_reapet_letter(char* arr[n]){
    int i = 0;
    char result = '\0';
    for(int j = n -1; j != i;){ 
         for(i = 0;i < n; ++i){
            if(arr[i] != arr[j] && i != j){
                --j;
                return 0; 
            }else{
                 result = arr[i]; 
            }
        }
    }
return result;
}
int main(){
    int arr[n] = {};
    
    printf("Please input %d lowercase letters for array\n", n);

    for (int i = 0;i < n;++i){
        printf("%d.", i+1);
        scanf("%c", &arr[i]);
    }

    char result = '\0';

    result = find_reapet_letter(arr);
    
    printf("%c", *ptr);

return 0;
}
