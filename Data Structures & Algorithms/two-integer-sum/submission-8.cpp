class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> vals;
    for (int i = 0; i<nums.size(); i++){
      if (vals.count(target-nums[i])){
        return {vals[target-nums[i]], i};
      }
      vals[nums[i]] = i;
    }
    return {0,0};
  }
};