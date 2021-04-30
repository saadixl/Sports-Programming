/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    for (var i = 0; i < nums.length; i++) {
        if (val == nums[i]) {
            delete nums[i];
        }
    }
    return nums.length;
};
