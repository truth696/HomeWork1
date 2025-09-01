#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *custom_realloc(void *ptr, size_t new_size){ 

    if (new_size == 0) {
        free(ptr);
        return NULL;
    }
    
    if (ptr == NULL) {
        return malloc(new_size);
    }    

    void* tmp = malloc(new_size);
    if (tmp == 0) return NULL;
    
    memcpy(tmp,ptr,new_size);
    
    free(ptr);

return tmp;
} 
