var canConstruct = function(ransomNote, magazine) {
  let count = 0;
  for(let i=0; i<ransomNote.length; i++) {
    const char = ransomNote.charAt(i);
    const index = magazine.indexOf(char);
    if(index > -1) {
      magazine = magazine.split("");
      magazine[index] = "_";
      magazine = magazine.join("");
      count++;
    }
  }
  return count === ransomNote.length;
};
