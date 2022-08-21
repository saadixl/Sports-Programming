function climbStairs(n: number): number {
    if(n < 3) {
        return n;
    }
    let sums : number[] = [1, 2].concat(Array(n - 2));
    for(let i : number = 2; i < n; i++) {
        sums[i] = sums[i - 1] + sums[i - 2];
    }
    return sums[n - 1];
};
