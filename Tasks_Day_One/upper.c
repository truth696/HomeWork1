#include <stdio.h>

char uppercase(char letter){
     char results  = letter -  32;

return results;
    }
    
int main(){
    char letter = '\0';
    
    printf("Please input lowercase letter: ");
    scanf("%c", &letter);
    
    char result = uppercase(letter);
    
    printf("Your letter: %c" , result);

return 0;
}
    
