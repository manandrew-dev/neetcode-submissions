class Solution {
  public int longestConsecutive(int[] nums) {
    Set<Integer> hashednums = new HashSet<>();
    int longest = 0;
    int length = 0;
    int cur = 0;
    for (int num : nums){
      hashednums.add(num);
    }
    for (int num : hashednums){
      if (!hashednums.contains(num-1)){
        length = 0;
        cur = num;
        while (hashednums.contains(cur)){
          length++;
          if (length>longest){
            longest = length;
          }
          cur++;
        }
      }
    }
    return longest;
  }
}