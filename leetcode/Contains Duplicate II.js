/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {

    for (var i = 0; i < nums.length; i++) {

        for (var j = i + 1; j <= i + k; j++) {
            if (j >= nums.length) {
                break;
            }
            if (nums[i] == nums[j]) {
                return true;
            }
        }

    }

    return false;
};
