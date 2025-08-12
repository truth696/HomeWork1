#include <stdio.h>
#include <string.h>
#define n 50
void delete_char(char* arr, char del){
    for(int i = 0; i != strlen(arr);++i){
        if(arr[i] == del){
            arr[i] = ' ';
        } 
    }
}

int main(){
    char arr[n];
    char del = 0;
    
    printf("Please input your sentence:\n");
    fgets(arr , n , stdin);
    
    printf("Please input char, that you want remove\n");
    scanf("%s", &del);
    
    delete_char(arr, del);
    
    puts(arr);
return 0;
    }
