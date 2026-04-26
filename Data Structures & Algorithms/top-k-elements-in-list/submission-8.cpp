class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> frequencies;
    for (int num : nums){
      frequencies[num]++;
    }
    auto cmp = [&frequencies](int a, int b){
      return frequencies[a]>frequencies[b];
    };
    priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
    for (auto& [key, element] : frequencies){
      if (pq.size() == k){
        pq.push(key);
        pq.pop();
      }else{
        pq.push(key);
      }
    }
    vector<int> ans;
    for (int i = 0; i<k; i++){
      ans.push_back(pq.top());
      pq.pop();
    }
    return ans;
  }
};