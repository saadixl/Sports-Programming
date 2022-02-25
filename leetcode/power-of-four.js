var isPowerOfFour = function(n) {
    for(let x = 0; x <= 30; x++) {
        const posX = x;
        const negX = -1 * x;
        const posM = Math.pow(4, posX);
        if(posM === n) {
            return true;
        } else {
            const negM = Math.pow(4, negX);
            if(posM === n) {
                return true;
            }
        }
    }
    return false;
};
