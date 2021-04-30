/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    s = s.split('');
    s.sort();
    
    t = t.split('');
    t.sort();
  
  console.log(s, t);
    
    let index = -1;
    for(let i=0; i<s.length; i++) {
        const sC = s[i];
        const tC = t[i];
        if(sC !== tC) {
            index = i;
            break;
        }
    }
    return index > -1 ? t[index] : t[t.length-1];
};
