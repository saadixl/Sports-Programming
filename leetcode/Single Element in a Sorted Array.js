/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNonDuplicate = function(nums) {
    if(nums.length === 1) {
        return nums[0];
    }
    for(let i=0; i<nums.length; i++) {
        const n = nums[i];
        if(n!== nums[i-1] && n!== nums[i+1]) {
            return n;
        }
    }
};
