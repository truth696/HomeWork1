int removeElement(int* nums, int numsSize, int val) {
    if (!numsSize) return 0;
    int v = 0;
    int count = 0;

    for (int i = 0; i < numsSize;) {
        if ( nums[i] == val){
            ++i;
        } else {
            ++count;
            nums[v] = nums[i];
            ++v;
            ++i;
        }
    }
    return count; 
}
