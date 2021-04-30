/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    var xCopy = x;
    var maxInt = 2147483647;
    var nmaxInt = -2147483647;
    var negFlag = false;
    if (x < 0) {
        x *= -1;
        negFlag = true;
    }
    var str = x.toString();

    str = rev(str);
    x = parseInt(str);
    if (negFlag) {
        x *= -1;
    }
    if (x > maxInt || xCopy > maxInt || x < nmaxInt || xCopy < nmaxInt) {
        return 0;
    }
    return x;
};

var rev = function(s) {
    var r = "";
    for (var i = s.length - 1; i >= 0; i--) {
        r += s.charAt(i);
    }
    return r;
};
