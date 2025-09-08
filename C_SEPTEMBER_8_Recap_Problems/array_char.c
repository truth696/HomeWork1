#include <stdio.h>
#include <string.h>

const int size = 40;

void scanf_array (char* arr, int size) {
    printf("Please input your sentence: ");
    fgets (arr, size, stdin);
    
}
    
void printf_array (char* arr, int size) {
    printf("Your sentence: ");
    fputs (arr, stdout);
}

int main() {

    char arr[size] = {};
    
    scanf_array (arr, size);
    printf_array (arr, size);

return 0;
}   
