/**
 * @param {number} n
 * @return {number}
 */
let memo = [];
var trib = function(n) {
    let returnVal;
    if(memo[n]) {
        returnVal = memo[n];
    } else if(n === 0) {
        returnVal = 0;
    } else if(n === 1) {
        returnVal = 1;
    } else if(n === 2) {
        returnVal = 1;
    } else {
        returnVal = trib(n - 1) + trib(n - 2) + trib(n - 3);
    }
    memo[n] = returnVal;
    return returnVal;
};

var tribonacci = function(n) {
    memo = [];
    return trib(n);
};
