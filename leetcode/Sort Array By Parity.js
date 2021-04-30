/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortArrayByParity = function(A) {
    let res = [];
    A.forEach((x) => {
        if(x%2===0) {
            res.unshift(x);
        } else {
            res.push(x);
        }
    });
    return res;
};
