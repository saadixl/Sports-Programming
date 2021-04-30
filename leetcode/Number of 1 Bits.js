/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function(n) {
    var str = Number(n).toString(2);
    var count = 0;
    for (var i = 0; i < str.length; i++) {
        if (str.charAt(i) == '1') {
            count++;
        }
    }
    return count;
};
