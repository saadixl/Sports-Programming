var isValid = function(s) {
    const stack = [];
    for(let i=0; i < s.length; i++) {
        const char = s.charAt(i);
        // Check previous character after index 0
        if(i > 0) {
            // Pop the last element
            const prevChar = stack.pop();
            if(
                prevChar === '(' && char === ')' ||
                prevChar === '{' && char === '}' ||
                prevChar === '[' && char === ']'
            ) {
                // No action needed here, resolving brackets
            } else {
                // Since brackets didn't match, push previous and current characters
                // But prevChar can be undefined, handle it
                if(prevChar) {
                   stack.push(prevChar); 
                }
                stack.push(char);
            }
        } else {
            // Pushing the first character
            stack.push(char); 
        }
    }
    // If stack is empty then valid else invalid
    return !stack.length;
};
