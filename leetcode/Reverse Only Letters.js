var reverseOnlyLetters = function(S) {
    let letters = [], chars = S.split("");
  
    for(let i=0; i<chars.length; i++) {
      const asci = chars[i].charCodeAt(0);
      if((asci >= 65 && asci <= 90) || (asci >= 97 && asci <= 122)) {
        letters.push(S.charAt(i));
        chars[i] = 'X';
      }
    }
    letters = letters.reverse();
    for (let j=0; j<chars.length; j++) {
      if(chars[j] === 'X') {
        const firstElement = letters.shift();
        chars[j] = firstElement;
      }
    }
    return chars.join("");
};
