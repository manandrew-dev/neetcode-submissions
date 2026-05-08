class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        hashednums = set(nums)
        longest = 0
        for num in hashednums:
            if num - 1 not in hashednums:
                length = 0
                cur = num
                while cur in hashednums:
                    length+=1
                    if length>longest:
                        longest = length
                    cur = cur+1
        return longest

 