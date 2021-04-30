/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    var ass = stringSort(s);
    var tits = stringSort(t);
    if (ass == tits) {
        return true;
    } else {
        return false;
    }
};

var stringSort = function(str) {
    var strArr = str.split("");
    strArr.sort();
    str = strArr.join("");
    return str;
}
String.prototype.replaceAt = function(index, character) {
    return this.substr(0, index) + character + this.substr(index + character.length);
}
