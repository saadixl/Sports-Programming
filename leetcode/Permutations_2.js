var permuteUnique = function(nums) {
    const res = [], exclusionMap = {};
    const permute = (nums, memo = []) => {
        if(!nums.length) {
            const hash = memo.join('-');
            if(!exclusionMap[hash]) {
                res.push(memo);
                exclusionMap[hash] = true;
            }
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
