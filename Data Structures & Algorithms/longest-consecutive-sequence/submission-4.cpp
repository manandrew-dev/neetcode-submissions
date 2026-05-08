class Solution {
 public:
  int longestConsecutive(vector<int>& nums) {
    unordered_set<int> hashednums(nums.begin(), nums.end());
    int longest = 0;
    int length = 0;
    int cur = 0;
    for (int num : hashednums){
      if (!hashednums.count(num-1)){
        length = 0;
        cur = num;
        while (hashednums.count(cur)){
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
};