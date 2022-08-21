function rangeMaker(range: number[]): string {
    if(range.length > 1) {
        return `${range[0]}->${range[range.length - 1]}`;
    } else {
        return `${range[0]}`;
    }
}

function summaryRanges(nums: number[]): string[] {
    const len : number = nums.length;
    if(len === 0) { return []; }
    if(len === 1) { return [`${nums[0]}`] };
    let tracker : number = nums[0];
    let range : number[] = [];
    let result : string[] = [];
    nums.forEach((num) => {
        if(num !== tracker) {
            tracker = num;
            result.push(rangeMaker(range));
            range = [];
        }
        tracker++;
        range.push(num);
    });
    result.push(rangeMaker(range));
    return result;
};
