const symbols = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000
};

var romanToInt = function(s) {
    let sum = 0, previousChar, previousNum;
    s.split('').forEach(currentChar => {
        const currentNum = symbols[currentChar];
        if(previousNum && currentNum > previousNum) {
            sum = (sum-previousNum) + (currentNum-previousNum);
        } else {
            sum += currentNum;
        }
        previousNum = currentNum;
    });
    return sum;
};
