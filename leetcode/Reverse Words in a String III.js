/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let arr = s.split(' ');
    arr.forEach((c, i) => {
        arr[i] = c.split("").reverse().join("");
    });
    return arr.join(' ');
};
