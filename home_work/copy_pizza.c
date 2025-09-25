#include <stdio.h>
    
enum SIZE {Small , Medium, Large, Extra_Large};

int main() {
    
    char choose;
    
    const int s = Small;
    const int m = Medium;
    const int l = Large;
    const int e = Extra_Large;
    
    printf("Please input size, that you want fro pizza:\n -------------------------------------\n  Small, Medium, Large, Extra_Large\n");
    scanf("%c", &choose);
    
    switch (choose){
        
        case 'S'|'s':
            printf("You choose is small pizza, from you 10$\n");
            break;
        case 'M'|'m':
            printf("You choose is meduim pizza, from you 15$\n");
            break;
        case 'L'|'l':
            printf("You choose is Large pizza, from you 20$\n");
            break;
        case 'E'|'e':
            printf("You choose is Extra_Large pizza, from you 25$\n");
            break;  
        default:
            printf("Please input correct request");
    }
    
return 0;
    
        

} 
