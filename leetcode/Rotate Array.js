/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    k = k % nums.length;
    var start = nums.slice((nums.length - k));
    var end = nums.slice(0, nums.length - k);
    for (var i = 0; i < start.length; i++) {
        nums[i] = start[i];
    }
    var y = 0;
    for (var j = start.length; j < nums.length; j++) {
        nums[j] = end[y];
        y++;
    }
};
