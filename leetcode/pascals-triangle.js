var generate = function(numRows) {
    let result = [[1]];
    for(let i = 1; i < numRows; i++) {
        const arr = result[i - 1];
        const row = [arr[0]];
        const arrLen = arr.length;
        for(let j = 1; j < arrLen; j++) {
            row.push(arr[j - 1] + arr[j])
        }
        row.push(arr[arrLen - 1]);
        result[i] = row;
    }
    return result;
};
