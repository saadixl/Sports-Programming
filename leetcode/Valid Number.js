/**
 * @param {string} s
 * @return {boolean}
 */
var isNumber = function(s) {
    var s2 = s.split(" ");
    var s3 = s2.filter(function(v) {
        return v !== ''
    });
    if (s3.length == 1 && !isNaN(s3[0])) {
        return true;
    }
    return false;
};
