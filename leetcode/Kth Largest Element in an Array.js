/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function(nums, k) {
    nums.sort(function(a, b) {
        return a - b;
    }).reverse();
    return nums[k - 1];
};
