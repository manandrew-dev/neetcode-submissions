class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prefixes = []
        suffixes = []
        ans = []
        prefixes.append(1)
        tmp = nums[0]
        for num in nums[1::]:
            prefixes.append(tmp)
            tmp = tmp*num
        suffixes.append(1)
        tmp = nums[-1]
        for num in nums[-2::-1]:
            suffixes.append(tmp)
            tmp = tmp*num
        suffixes = suffixes[::-1]
        print(prefixes)
        print(suffixes)
        for i in range(len(prefixes)):
            ans.append(prefixes[i]*suffixes[i])
        return ans

