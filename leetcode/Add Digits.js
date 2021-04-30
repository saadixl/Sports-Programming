/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    if (num < 10) {
        return num;
    } else {
        var str = num.toString();
        var res = 0;
        var len = str.length;
        while (len > 1) {
            for (var i = 0; i < str.length; i++) {
                if (str.charAt(i) !== '0') {
                    res += parseInt(str.charAt(i));
                }
            }
            str = res.toString();
            res = 0;
            len = str.length;
        }
        var result = parseInt(str);
        return result;
    }

};
