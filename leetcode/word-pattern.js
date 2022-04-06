var wordPattern = function(pattern, s) {
    const patternMap = {};
    let newPattern = '';
    s.split(' ').forEach((word, i) => {
        const char = pattern.charAt(i);
        if(!patternMap[word] && Object.values(patternMap).indexOf(char) === -1) {
            patternMap[word] = char
            newPattern += char;
        } else {
            newPattern += patternMap[word];
        }
    });
    return newPattern === pattern;
};
