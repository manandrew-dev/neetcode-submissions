class MinStack {
 private:
  stack<pair<int, int>> st;
  int min = INT_MAX;
 public:
  MinStack() {}

  void push(int val) {
    st.push({val, min});
    if (val<min){
      min = val;
    }
  }

  void pop() {
    if (st.top().first == min){
      min = st.top().second;
    }
    st.pop();
  }

  int top() {
    return st.top().first;
  }

  int getMin() {
    return min;
  }
};