class Solution {
  public int[] productExceptSelf(int[] nums) {
    List<Integer> prefixes = new ArrayList<>();
    List<Integer> suffixes = new ArrayList<>();
    int[] answer = new int[nums.length];
    prefixes.add(1);
    int tmp = nums[0];
    for (int i = 1; i<nums.length; i++){
      prefixes.add(tmp);
      tmp = tmp*nums[i];
    }
    suffixes.add(1);
    tmp = nums[nums.length-1];
    for (int i = nums.length-2; i>=0; i--){
      suffixes.add(tmp);
      tmp = tmp*nums[i];
    }
    Collections.reverse(suffixes);
    for (int i = 0; i<nums.length; i++){
      answer[i] = prefixes.get(i)*suffixes.get(i);
    }
    return answer;
  }
}