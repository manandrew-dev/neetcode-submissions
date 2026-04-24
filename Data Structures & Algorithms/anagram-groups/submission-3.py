class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}
        for s in strs:
            sorteds = str(sorted(s))
            if (sorteds in groups):
                groups[sorteds].append(s)
            else:
                groups[sorteds] = [s]
        return list(groups.values())
 