class Solution {
    fun buildArray(nums: IntArray): IntArray {
        val numSize : Int = nums.size
        var ans : MutableList<Int> = mutableListOf()
        for(i in 0..numSize-1) {
            ans.add(nums[nums[i]])
        }
        return ans.toIntArray()
    }
}
