/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
const list2Arr = (list) => {
    let head = list, arr = [];
    // Note that !head.val will be true when the value is 0 ;)
    while(head && (head.val !== null && head.val !== undefined)) {
        arr.push(head.val);
        head = head.next;
    }
    return arr;
};

const arr2List = (arr) => {
    let list = {};
    const lastIndex = arr.length-1;
    let temp;
    for(let i=lastIndex; i>=0; i--) {
        if(i===lastIndex) {
            list = {
                val: arr[i],
                next: null
            };
            temp = list;
        } else {
            temp = list;
            list = {
                val: arr[i],
                next: temp
            };
        }
    }
    return list;
};

var mergeTwoLists = function(list1, list2) {
    if(!list1) { 
        return list2; 
    } else if(!list2) { 
        return list1; 
    } else {
        const arr1 = list2Arr(list1);
        const arr2 = list2Arr(list2);
        console.log(arr1, arr2);
        const sortedArr = arr1.concat(arr2).sort((a, b) => { return a - b });
        return arr2List(sortedArr);   
    }
};
