class Solution {
public:
  int largestRectangleArea(vector<int> &heights) {
    stack<pair<int, int>> st;
    int max = 0;
    int right;
    int left;
    st.push({heights[0], 0});
    pair<int, int> val;
    for (int i = 1; i < heights.size(); i++) {
      while (!st.empty() && heights[i] < st.top().first) {
        val = st.top();
        st.pop();
        right = i - val.second - 1;
        if (val.second == 0) {
          left = 0;
        } else {
          left = st.empty() ? val.second : val.second - st.top().second - 1;
        }
        if (val.first * (1 + right + left) > max) {
          max = val.first * (1 + right + left);
        }
      }
      st.push({heights[i], i});
    }

    while (!st.empty()) {
      val = st.top();
      st.pop();
      right = heights.size() - val.second - 1;
      if (val.second == 0) {
        left = 0;
      } else {
        left = st.empty() ? val.second : val.second - st.top().second - 1;
      }
      if (val.first * (1 + right + left) > max) {
        max = val.first * (1 + right + left);
      }
    }
    return max;
  }
};