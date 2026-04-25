class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> ans;
    for (string str : strs){
      string sortedstr = str;
      sort(sortedstr.begin(), sortedstr.end());
      ans[sortedstr].push_back(str);      
    }
    vector<vector<string>> ansvector;
    for (auto& [key, val] : ans){
      ansvector.push_back(val);
    }
    return ansvector;
  }
};