class Solution {
  public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> vals = new HashMap<>();
    for (int i = 0; i<nums.length; i++){
      if (vals.get(target-nums[i])!=null){
        return new int[]{vals.get(target-nums[i]),i};
      }
      vals.put(nums[i],i);
    }
    return new int[]{};
  }
}