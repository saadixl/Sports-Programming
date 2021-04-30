/**
 * @param {string} str
 * @return {string}
 */
var toLowerCase = function(str) {
    let res = "";
    for(let i=0; i<str.length; i++) {
        const charCode = str.charCodeAt(i);
        if(charCode >= 65 && charCode <= 90) {
            res += String.fromCharCode(charCode+32);
        } else {
            res += str.charAt(i);
        }
    }
    return res;
};
