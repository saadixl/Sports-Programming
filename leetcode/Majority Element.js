/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    var sorted = nums.sort();
    var MAX = 0;
    var MAJOR = nums[0];
    var count = 0;

    for (var i = 0; i < sorted.length - 1; i++) {
        if (sorted[i] == sorted[i + 1]) {
            count++;
            if (count > MAX) {
                MAX = count;
                MAJOR = sorted[i];
            }
        } else {

            count = 0;
        }
    }

    return MAJOR;

};
