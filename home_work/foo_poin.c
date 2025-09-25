#include <stdio.h>

typedef int (*operation) (int a, int b);

int apply (int a, int b, operation op){
    return op(a,b);
}

int sum (int a, int b) {
    return a+b;
}

int mul (int a, int b) {
     return a*b;
}

int sub (int a, int b) {
    return a-b;
}

int div (int a, int b) {
    return a/b;
}
 
int apply (int a, int b, operation op);
   
int main() {

    operation op = NULL;
    int a = 0;
    int b = 0;
    int res = 0; 
    int choise = 0;
    char ch;

    printf("Please input two numbers:\n");
    scanf("%d %d", &a, &b);
    
    printf("Please choose + - * /\n");
    scanf(" %c", &ch);
    
    if (ch == '+') op = sum;
    else if (ch == '-') op = sub;
    else if (ch == '*') op = mul;
    else if (ch == '/') op = div;
    else printf("none correct number");
    
    res = apply(a,b,op);
    
    printf("Your results: %d", res);
    
return 0;
}
