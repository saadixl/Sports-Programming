var restoreString = function(s, indices) {
    const newArr = [];
    indices.forEach((newIndex, oldIndex) => {
        newArr[newIndex] = s[oldIndex];
    });
    return newArr.join('');
};
