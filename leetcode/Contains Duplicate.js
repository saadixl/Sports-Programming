/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    var maps = new Array();
    for (var i = 0; i < nums.length; i++) {
        if (maps[nums[i]] == 1) {
            return true;
        } else {
            maps[nums[i]] = 1;
        }
    }
    return false;
};
