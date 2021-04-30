var heightChecker = function(heights) {
  const heightsCloned = [].concat(heights);
  const sorted = heightsCloned.sort((a, b) => {
    return a - b;
  });
  let count = 0;
  for(let i=0; i<heights.length; i++) {
    if(heights[i] !== sorted[i]) {
      count++;
    }
  }
  return count;
};
