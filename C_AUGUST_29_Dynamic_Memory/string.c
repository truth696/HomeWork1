#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0; 
    
    printf("Please input your size: ");
    scanf("%d", &n);
    getchar();
    
    n += n;
    char* arr = malloc(n * sizeof(int));

    printf("Please input your sentence: ");
    fgets(arr, n, stdin);
    
    printf("You sentence: ");        
    fputs(arr, stdout);
    free (arr);
    printf("\nYour size: %d", n);

    free (arr);    
return 0;
}
