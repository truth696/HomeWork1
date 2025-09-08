int removeDuplicates(int* nums, int numsSize) {
    int j = 0; 
    int i = 0;
    int v = 0;
    for(j = 0; j < numsSize-1;++j){
        if (nums[j] != nums[j + 1]) {
             i = j;
             nums[v] = nums[i];
             ++v;
        }
    } 
    nums[v] = nums[j];
return v+1;
}
