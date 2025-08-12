#include <stdio.h>
#define n 50 
#include <string.h>
void add_new(char* arr){
    char *ptr = arr;
    strcat(ptr, "I add this text, I hope you don't mind"); 
 }

int main(){
    char arr[n];
    char *ptr = arr;
    
    printf("Please input your sentence\n");
    
    fgets(ptr, n, stdin);
    
    add_new(arr);
    
    puts(arr);
    
return 0;
}
