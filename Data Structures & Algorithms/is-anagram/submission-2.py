class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        schars = list(s)
        tchars = list(t)
        schars.sort()
        tchars.sort()
        return True if schars == tchars else False
 