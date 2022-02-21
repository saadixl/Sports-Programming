var searchInsert = function(nums, target) {
    const index = nums.indexOf(target);
    if(index > -1) {
        return index;
    } else {
        const numsLen = nums.length;
        const lastItem = nums[numsLen-1];
        if(target > lastItem) {
            return numsLen;
        } else {
            for(let i = numsLen - 1; i >= 0; i--) {
                if(nums[i] < target) {
                    return i + 1;
                }
                if(i===0 && nums[i] > target) {
                    return 0;
                }
            }
        }
    }
};
