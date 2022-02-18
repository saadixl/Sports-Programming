var arrangeCoins = function(n) {
    if(n === 1) {
        return 1;
    }
    for(let i=1; i<=n; i++) {
        const divergentSum = i * (i + 1) / 2;
        if(divergentSum > n) {
            return i - 1;
        }
    }
};
