

int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) {
        return 0;
    }

    int uniqueCount = 1;
    int duplicateCount = 0;
    for(int i=0; i < numsSize -1; i++){
        if(nums[i] != nums[i+1]){
            uniqueCount++;
            nums[i+1-duplicateCount] = nums[i+1];
        } else {
            duplicateCount++;
        }
    }
    
    return uniqueCount;
}