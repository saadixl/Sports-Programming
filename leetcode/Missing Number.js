/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    var res;
    nums = nums.sort(function(a, b){return a-b});
    for(var i=0; i<nums.length; i++){
       if(i!==nums[i]){
        	return i;   
       }
       else{
           res = nums[i];
       }
    }
    return res+1;
};