var frequencySort = function(s) {
  const map = {};
  for(let i=0; i<s.length; i++) {
    const char = s.charAt(i);
    if(!map[char]) {
      map[char] = 1;
    } else {
      map[char]++;
    }
  }
  let sortable = [];
  Object.keys(map).forEach((key) => {
    sortable.push([key, map[key]]);
  });
  sortable.sort((a, b) => {
    return b[1] - a[1];
  });
  let result = "";
  sortable.forEach((arr) => {
    for(j=0; j<arr[1]; j++) {
      result += arr[0];
    }
  });
  return result;
};
