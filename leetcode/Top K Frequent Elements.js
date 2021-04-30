/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
    if(nums.length ===1) {
        return nums;
    }
    const map = {};
    for(let i=0; i<nums.length; i++) {
        if(!map[nums[i]]) {
            map[nums[i]] = 1;
        } else {
           map[nums[i]]++; 
        }
    }
  let sortable = [];
  for (num in map) {
    sortable.push([parseInt(num), map[num]]);
  }
  
  sortable.sort((a, b) => {
    return b[1] - a[1];
  });
  let res = [];
  for(let j=0; j<k; j++) {
    res.push(sortable[j][0]);
  }
  return res;
};
