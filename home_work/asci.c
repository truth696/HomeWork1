#include <stdio.h>

char recu (char* s) {
    
    if (*s >= 'A' && *s <= 'Z') {
        char tmp = *s;
        return tmp;
    }
    if (s == NULL) return 0;
    
    return recu(s+1);
}
    
int main() {
    
    char senc[] = "hello Niger";
    
    char let = recu(senc);
    
    printf("%c", let);
    
return 0;
}
