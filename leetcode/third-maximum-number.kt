class Solution {
    fun thirdMax(nums: IntArray): Int {
        var map : HashMap <Int, Boolean> = HashMap<Int, Boolean>() 
        for(n in nums) {
            if(!map.containsKey(n)) {
                map[n] = true
            }
        }
        var uniqueNums = map.keys.toMutableList()
        uniqueNums.sortDescending()
        if(uniqueNums.size < 3) {
            return uniqueNums[0]
        } else {
            return uniqueNums[2]
        }
     }
}
