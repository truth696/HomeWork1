#include <stdio.h>
#define n 50 
#include <string.h>    
int main() {
    int arr[n] = {};
    
    const char * text1 = "Hello how are you?\n";
    char  answerd[15];
    char  plus[30] = "This so great!";
        
    fputs(text1, stdout);
    fgets(answerd, 15, stdin);
    strcat(plus, answerd);
    fputs(plus, stdout);

}
