var triangularSum = function(nums) {
    let len = nums.length;
    if(len < 2) {
        return nums[0];
    } else {
        let newNums = nums;
        while(len > 1) {
            let temp = [];
            for(let i = 1; i < len; i++) {
                temp.push((newNums[i-1]+newNums[i]) % 10);
            }
            len = temp.length;
            newNums = temp;
        }
        return newNums[0];
    }
};
