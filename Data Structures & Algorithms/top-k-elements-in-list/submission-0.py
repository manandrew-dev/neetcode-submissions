import heapq
from collections import defaultdict
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        heap = []
        frequencies = defaultdict(int)
        for num in nums:
            frequencies[num] += 1
        for element, frequency in frequencies.items():
            if (len(heap) == k):
                heapq.heappushpop(heap, (frequency, element))
            else:
                heapq.heappush(heap, (frequency, element))
        ans = []
        for tup in heap:
            ans.append(tup[1])
        return ans