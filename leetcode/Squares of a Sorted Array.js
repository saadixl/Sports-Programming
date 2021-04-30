/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortedSquares = function(A) {
    A.forEach((a, i) => {
        A[i] = a * a;
    });
    return A.sort((a, b) => {
        return a - b;
    });
};
