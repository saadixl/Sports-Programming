class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            n = nums[i]
            m = target - n
            k = nums[(i + 1):]
            try:
                j = k.index(m)
                return [i, i + j + 1]
            except ValueError:
                print("LOL")
