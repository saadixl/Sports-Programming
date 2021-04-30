/**
 * @param {number[]} nums
 * @return {number}
 */
var arrayPairSum = function(nums) {
    const n = nums.length;
    nums.sort(function(a, b){
      return a - b;
    });
    if(n==1 || n==2) {
        return nums[0];
    } else {
        let sum = 0;
        for(let i=0; i<n; i++) {
            if(i===0 || i%2 === 0) {
                sum += nums[i];
            }
        }
        return sum;
    }
};
