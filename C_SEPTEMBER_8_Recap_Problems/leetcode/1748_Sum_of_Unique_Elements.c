int sumOfUnique(int* nums, int numsSize) {
    int count = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < numsSize; ) {
        for (j = numsSize - 1; j != i; --j){
            if(nums[i] == nums[j]){
                ++i;
                j = numsSize -1;
            }
        }
        if (i == 0 && j == numsSize - 1 )return 0;
        count += nums[i];
        ++i;
    }
return count;
}
