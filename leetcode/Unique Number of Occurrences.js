/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function(arr) {
    const map = {};
    arr.forEach((item) => {
        if(!map[item]) {
           map[item] = 1; 
        } else {
            map[item]++;
        }
    });
    const counts = Object.values(map);
    for(let i=counts.length-1; i>=0; i--) {
        const index = counts.indexOf(counts[i]);
        if(index > -1 && index!== i) {
            return false;
        }
    }
    return true;  
};
