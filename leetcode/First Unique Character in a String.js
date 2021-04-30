var firstUniqChar = function(s) {
  if(s==="") {
      return -1;
  }
    if(s.length===1) {
      return 0;
  }
  const map = {};
  let unique = "";
  
  for(let i=0; i<s.length; i++) {
    const char = s.charAt(i);
    if(!map[char]) {
      map[char] = true;
      unique += char;
    } else {
      unique = unique.split(char).join("");
    }
  }
  if(unique.length) {
    return s.indexOf(unique.charAt(0));
  } else {
    return -1;
  }
};
