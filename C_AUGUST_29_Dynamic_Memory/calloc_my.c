#include <string.h>
#include <stdlib.h>

void *custom_calloc(size_t num, size_t size) {
    
    void* arr = malloc(size * sizeof(int));
    
    memset(arr, num, size);
    
    return arr;
}
