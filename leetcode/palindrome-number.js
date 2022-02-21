var isPalindrome = function(x) {
    const xStr = x.toString();
    return xStr === xStr.toString().split("").reverse().join("");
};
