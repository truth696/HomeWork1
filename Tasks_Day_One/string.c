#include <stdio.h>
#include <string.h>
#define n 50 
void find_length(char* arr){
    printf("Your size string: %lu" , strlen(arr));
        }
int main(){
    char arr[n];
    
    printf("Please input your text for array\n");
    fgets (arr, sizeof (arr), stdin);
    find_length(arr);

return 0;
}
