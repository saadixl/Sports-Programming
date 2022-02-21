/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let localMax = 0;
    accounts.forEach((customer) => {
        const localSum = customer.reduce((a, b) => {
            return a + b;
        }, 0);
        if(localSum > localMax) {
            localMax = localSum;
        }
    });
    return localMax;
};
