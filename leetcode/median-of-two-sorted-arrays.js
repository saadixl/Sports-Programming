var findMedianSortedArrays = function(nums1, nums2) {
    const mergedArray = nums1.concat(nums2).sort((a, b) => { return a - b });
    const mergedArrayLen = mergedArray.length;
    if(mergedArrayLen % 2 === 1) {
        const midIndex = Math.floor(mergedArray.length / 2);
        return mergedArray[midIndex];
    } else {
        const right = mergedArray.length / 2;
        const left = right - 1;
        return parseFloat((mergedArray[left]+mergedArray[right])/2);
    }
};
