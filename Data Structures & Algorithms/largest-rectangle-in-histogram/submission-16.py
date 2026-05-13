class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        prefixes = [0] * len(heights)
        suffixes = [0] * len(heights)
        stack = []
        for i in range(len(heights)):
            if not stack:
                stack.append((heights[i], i))
            else:
                while (stack and heights[i]<stack[-1][0]):
                    suffixes[stack[-1][1]] = i - stack[-1][1]-1
                    if len(stack)>1:
                        prefixes[stack[-1][1]] = stack[-1][1]-stack[-2][1]-1
                        stack.pop()
                    else:
                        prefixes[stack[-1][1]] = stack[-1][1]
                        stack.pop()
                stack.append((heights[i], i))
        while (stack):
            suffixes[stack[-1][1]] = len(heights) - stack[-1][1] -1
            val = stack.pop()
            if not stack:
                if val[1] != 0:
                    prefixes[val[1]] = val[1]
                else:
                    prefixes[val[1]] = val[1]
            else:
                prefixes[val[1]] = val[1]-stack[-1][1]-1
        max = 0
        for i in range(len(heights)):
            if heights[i]*(prefixes[i]+suffixes[i]+1)>max:
                max = heights[i]*(prefixes[i]+suffixes[i]+1)

        return max