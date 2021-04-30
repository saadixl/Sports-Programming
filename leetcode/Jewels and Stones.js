/**
 * @param {string} J
 * @param {string} S
 * @return {number}
 */
var numJewelsInStones = function(J, S) {
    let total = 0;
    for (let i=0; i<J.length; i++) {
        const j = J.charAt(i);
        const re = new RegExp(j,"g");
        const count = (S.match(re) || []).length;
        total += count;
    }
    return total;
};
