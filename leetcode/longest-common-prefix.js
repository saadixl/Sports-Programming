/**
 * @param {string[]} strs
 * @return {string}
 */
const findShortestWord = (arr) => {
    let shortest = arr[0];
    for(let i=1; i<arr.length; i++) {
        const str = arr[i];
        if(str.length < shortest.length) {
            shortest = str;
        }
    }
    return shortest;
};

var longestCommonPrefix = function(strs) {
    const wordCount = strs.length;
    const shortest = findShortestWord(strs);
    let sub = "", result = "";
    // Traverse the shortest string
    for(let i=0; i<shortest.length; i++) {
        // Build substrings from 0->n 
        sub += shortest.charAt(i);
        let count = 0;
        // Traverse the words
        strs.forEach((word) => {
            // Get prefix
            const indexOfSub = word.indexOf(sub);
            if(indexOfSub === 0) {
                count++;
            }
            // Check if prefix is common for all words
            if(count === wordCount) {
                result = sub;
            }
        });
    }
    return result;
};
