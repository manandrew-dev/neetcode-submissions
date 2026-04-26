class Solution {
  public int[] topKFrequent(int[] nums, int k) {
    Map<Integer, Integer> frequencies = new HashMap<>();
    for (int num : nums) {
      frequencies.put(num, frequencies.getOrDefault(num, 0) + 1);
    }
    PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> a[0] - b[0]);
    for (Map.Entry<Integer, Integer> entry : frequencies.entrySet()) {
      if (pq.size() == k) {
        pq.offer(new int[] { entry.getValue(), entry.getKey() });
        pq.poll();
      } else {
        pq.offer(new int[] { entry.getValue(), entry.getKey() });
      }
    }
    int[] ans = new int[k];
    int i = 0;
    for (int[] pair : pq) {
      ans[i] = pair[1];
      i++;
    }
    return ans;
  }
}