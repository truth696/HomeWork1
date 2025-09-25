int maximumProduct(int* nums, int numsSize) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    if (numsSize == 3) return nums[0]*nums[1]*nums[2];
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] >= max1){
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2){
            max3 = max2;
            max2 = nums[i];
        } else if (nums[i] > max3) {
            max3 = nums[i];
        }
    }
    for (int i = 0; i < numsSize; ++i){
        if (min1 > nums[i]){
            min2 = min1;
            min1 = nums[i];
        } else if ( min2 > nums[i]) min2 = nums[i];
    }
    int res1 = max1 * max2 * max3;
    int res2 = max1 * min1 * min2;
    if(res1 > res2) return res1;

return res2;
}
