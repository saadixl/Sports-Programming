var rotateString = function(A, B) {
    if(A==="" && B==="") {
        return true;
    }
    const len = A.length;
    for(let i=0; i<len; i++) {
        A = A.split("");
        const left = A.shift();
        A.push(left);
        A = A.join("");
        if(A===B) {
            return true;
        }
    }
    return false;
};
