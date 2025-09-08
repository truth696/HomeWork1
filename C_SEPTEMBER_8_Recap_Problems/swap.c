#include <stdio.h>
#include <string.h>

const int size = 50;

void swap (char* s) {
    for (int i  = 0; i < strlen(s) ; ++i) {
        for (int j = strlen(s) - 1; j >= i; --j) {
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
        }
    }
}


int main() {
    char s[size] = {};
    
    printf("Please input sentence: ");
    fgets(s, size, stdin);
    
    char* r = s;

    while (*r != '\n') {
        ++r;
    }
    *r = '\0';

    swap (s);
    
    fputs(s, stdout);
    
return 0;
}
