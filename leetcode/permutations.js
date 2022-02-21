var permute = function(nums) {
    const res = [];
    const permute = (nums, memo = []) => {
        if(!nums.length) {
            res.push(memo);
        }
        for(let i=0; i<nums.length; i++) {
            let cur = nums.slice();
            let rem = cur.splice(i, 1);
            permute(cur.slice(), memo.concat(rem))
        }
    };
    permute(nums);
    return res;
};
