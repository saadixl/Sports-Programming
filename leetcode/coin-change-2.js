var change = function(amount, coins) {
    if(amount === 0) { return 1; }
    const ways = [1].concat(Array(amount).fill(0));
    coins.forEach((coin) => {
        for(let i = 1; i <= amount; i++) {
            if(i >= coin) {
                ways[i] += ways[i - coin];
            }
        }
    });
    return ways[amount];
};