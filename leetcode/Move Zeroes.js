var moveZeroes = function(nums) {
  const len = nums.length;
  for(let i=0; i<len; i++) {
    for(let j=i; j<len; j++) {
      if(nums[i] === 0) {
        const swap = nums[i];
        nums[i] = nums[j];
        nums[j] = swap;
      }
    }
  }
  return nums;
};
