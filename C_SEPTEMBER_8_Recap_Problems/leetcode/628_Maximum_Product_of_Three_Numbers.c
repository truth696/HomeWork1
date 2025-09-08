int maximumProduct(int* nums, int numsSize) {
    int count = 1;
    int res = 0;
    int i = 0;
    for (int i = 0; i < numsSize; ++i){
        count *= nums[i];
    }
return count;
}
