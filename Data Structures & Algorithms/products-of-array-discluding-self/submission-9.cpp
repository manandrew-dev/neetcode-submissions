class Solution {
 public:
  vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> prefixes;
    vector<int> suffixes(nums.size());
    vector<int> answer;
    prefixes.push_back(1);
    int tmp = nums[0];
    for (int i = 1; i<nums.size(); i++){
      prefixes.push_back(tmp);
      tmp = tmp*nums[i];
    }
    suffixes[suffixes.size()-1] = 1;
    tmp = nums[nums.size()-1];
    for (int i = nums.size()-2; i>=0; i--){
      suffixes[i] = tmp;
      tmp = tmp*nums[i];
    }
    for (int i = 0; i<nums.size(); i++){
      answer.push_back(prefixes[i]*suffixes[i]);
    }
    return answer;
  }
};