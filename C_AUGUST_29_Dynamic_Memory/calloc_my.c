#include <string.h>

void* calloc_my(int* arr, int  size, int num) {
    memset(arr, num, size);
    
    return arr;
}
