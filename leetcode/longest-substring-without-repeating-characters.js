var lengthOfLongestSubstring = function(s) {
    // Return 0 if empty string, return 1 if single character
    if(s.length < 2) {
        return s.length;
    }
 
    let sub = "", res = "";
    s.split('').forEach((c, i) => {
        // if a traversing character already available in the sub
        if(sub.indexOf(c) > -1) {
            // if sub is longer than res, save new sub
            if(sub.length > res.length) {
                res = sub;
            }
            // Take everything else after the matched character to sub
            sub = sub.slice(sub.indexOf(c)+1) + c;
        } else {
            sub += c;
            /*
                If sub makes up until last character and
                it's longer then the saved res, the save new sub
            */ 
            if(i === s.length - 1 && sub.length > res.length) {
                res = sub;
            }
        }
    });
    return res.length;
};
