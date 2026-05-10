class Solution:
    def trap(self, height: List[int]) -> int:
        answer = 0
        prefixmaxes = [0]*len(height)
        suffixmaxes = [0]*len(height)
        max = 0
        for i in range(len(height)):
            if height[i]>max:
                max = height[i]
            prefixmaxes[i] = max

        max = 0
        for i in range(len(height)-1, -1, -1):
            if height[i]>max:
                max = height[i]
            suffixmaxes[i] = max

        for i in range(len(height)):
            answer+=min(prefixmaxes[i], suffixmaxes[i])-height[i]

        return answer