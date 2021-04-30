/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    var carry = 0;
    digits[digits.length - 1]++;
    for (var a = digits.length - 1; a >= 0; a--) {
        if (digits[a] > 9) {
            carry = 1;
            digits[a] = digits[a] - 10;
        }

        if (a > 0 && carry == 1) {
            digits[a - 1] += carry;
            carry = 0;
        }
        if (a == 0 && carry == 1) {
            digits.unshift(1);
        }
    }

    return digits;


};
