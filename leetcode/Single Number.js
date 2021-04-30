/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    var ans;
    var map = [];
    nums.sort();
    for (var i = 0; i < nums.length; i++) {
        var pos = map.indexOf(nums[i]);
        if (pos >= 0) {
            map.splice(pos, 1);
        } else {
            map.push(nums[i]);
        }

    }

    return map[0];
};
