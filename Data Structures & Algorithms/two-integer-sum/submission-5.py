class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        vals = {}
        for i in range(len(nums)):
            if (target - nums[i] in vals):
                ans = [vals.get(target-nums[i]), i]
                return ans
            if (not nums[i] in vals):
                vals[nums[i]] = i
        return 0

 