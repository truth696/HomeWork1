#include <stdio.h>
#define n 5 
    
void find_number(char* arr){
    int vowels = 0; 
    int consonants = 0;
    for(int i = 0;i < n;++i){
        if(arr[i] == 65|| arr[i] == 65 + 32 || arr[i] == 69 || arr[i] == 69 + 32 ||  arr[i] == 73 || arr[i] == 73 + 32 || arr[i] == 79 ||arr [i]  == 79 +32 || arr[i] == 85 ||arr[i] == 85 + 32  || arr[i] == 89 ||arr[i] ==  89 +32){
            vowels +=1;
        }else{
            consonants +=1;
        }
    }
    printf("Your vowels = %d, your consonats = %d" , vowels, consonants);
}

int main(){
    char arr[n] = {};
    
    printf("Please input %d char for array\n", n);
    for(int i = 0;i < n; ++i){
        scanf("%s", &arr[i]);
    }
    
    find_number(arr);
    
return 0;
}            
