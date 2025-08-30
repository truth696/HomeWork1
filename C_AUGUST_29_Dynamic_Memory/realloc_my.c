#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void* realloc_my(int* arr, int n) {
    
    int * tmp =  malloc(sizeof(int)*n);
    
    memcpy (tmp,arr, n);
    
    free (arr);
    
    return tmp;

} 
