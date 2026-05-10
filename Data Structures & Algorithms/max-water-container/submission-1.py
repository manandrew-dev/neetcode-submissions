class Solution:
    def maxArea(self, heights: List[int]) -> int:
        answer = 0
        i = 0
        j = len(heights)-1
        while i<j:
            if heights[i]<heights[j]:
                tmp = heights[i]*(j-i)
                i += 1
            else:
                tmp = heights[j]*(j-i)
                j -= 1

            if tmp>answer:
                answer = tmp

        return answer