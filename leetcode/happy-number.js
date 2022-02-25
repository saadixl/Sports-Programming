const square = (x) => x * x;

const squaredOfDigitsSum = (num) => {
    const charArr = num.toString().split('');
    let sum = 0;
    charArr.forEach((char) => {
        sum += square(parseInt(char));
    });
    return sum;
};

var isHappy = function(n) {
    let newNum = n, map = {};
    while(true) {
        // 2 and 3 can't be processed as happy 
        if(newNum < 4) {
            return newNum === 1;
        } else {
            // If not 1,2,3 try to process happiness
            newNum = squaredOfDigitsSum(newNum);
            // If newly processed number already processed, return false
            if(map[newNum]) {
                return false;
            }
            // Otherwise save it in map for future
            map[newNum] = true;
        }
    }
};
