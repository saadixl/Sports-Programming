/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var strArr = s.split(" ");

    for (var i = strArr.length - 1; i >= 0; i--) {
        if (strArr[i].length > 0) {
            return strArr[i].length;
        }
    }

    return 0;

};
