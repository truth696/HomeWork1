#include <stdio.h>
#define n 100
#include <string.h>

typedef char (*func)(char);
    
char to_upper(char c) {
    if (c >= 'a' && c <= 'z') return c-= 32;
    return c;
}

char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') return c += 32;
    return c;
}

void transform(char *str, char (*func)(char)) {
    
    for (int i = 0; i < strlen(str) - 1 ; ++i) {    
        str[i] = func(str[i]);
    }
    
    printf("Your result :");
    fputs(str, stdout);

}
    
int main() {
    int choise = 0;
    char s [n] = {};
    func op;
    
    printf("Please input your sentense:\n");
    fgets(s, n, stdin);
    
    printf("Please choose: 1 - upper, 2 - lower\n");
    scanf("%d", &choise);
    
    if (choise == 1) op = to_upper;
    else if (choise == 2) op = to_lower;
    else printf("none correct num");
    
    transform(s, op);
    
return 0;

     }
