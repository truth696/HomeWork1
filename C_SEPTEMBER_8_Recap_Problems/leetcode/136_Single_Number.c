int singleNumber(int* nums, int numsSize) {
    int count = 0;
    int i = 0;
    while (i < numsSize) {
        count ^= nums[i];
        ++i;
    }
return count;
}
