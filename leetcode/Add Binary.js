/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
    var big, small, res = "",
        carry = '0';
    if (parseInt(a) >= parseInt(b)) {
        big = a;
        small = b;
    } else {
        big = b;
        small = a;
    }
    var trailingZeroLength = big.length - small.length;
    var td = "";
    for (var t = 0; t < trailingZeroLength; t++) {
        td += '0';
    }
    small = td + small;
    for (var i = big.length - 1; i >= 0; i--) {
        var ai = big.charAt(i);
        var bi = small.charAt(i);
        if (ai == '0' && bi == '0' && carry == '0') {
            res += '0';
            carry = '0';
        } else if (ai == '0' && bi == '0' && carry == '1') {
            res += '1';
            carry = '0';
        } else if (ai == '0' && bi == '1' && carry == '0') {
            res += '1';
            carry = '0';
        } else if (ai == '0' && bi == '1' && carry == '1') {
            res += '0';
            carry = '1';
        } else if (ai == '1' && bi == '0' && carry == '0') {
            res += '1';
            carry = '0';
        } else if (ai == '1' && bi == '0' && carry == '1') {
            res += '0';
            carry = '1';
        } else if (ai == '1' && bi == '1' && carry == '0') {
            res += '0';
            carry = '1';
        } else if (ai == '1' && bi == '1' && carry == '1') {
            res += '1';
            carry = '1';
        }
    }
    if (carry == '1') {
        res += '1';
    }
    var newRes = reverse(res);
    return newRes;

};
var reverse = function(s) {
    return s.split('').reverse().join('');
}
