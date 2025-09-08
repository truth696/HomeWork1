int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    int max = nums[0];
    for (int i = 0; i < numsSize; ++i){
        if (max < nums[i]) max = nums[i];
    }
    while(i <= 9) {
        while(j < numsSize){
            if (i == nums[j]){
                ++i;
                j = 0;
            } else ++j;
        }
        if (max == i){
            return i+1;
        }
        return i;
    }
return 0;
}
