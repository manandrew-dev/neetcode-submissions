class Solution {
  public int[] dailyTemperatures(int[] temperatures) {
    Stack<int[]> st = new Stack<>();
    int[] answer = new int[temperatures.length];
    for (int i = 0; i < temperatures.length; i++) {
      if (st.empty()) {
        st.push(new int[] { temperatures[i], i });
      } else {
        while (!st.empty() && st.peek()[0] < temperatures[i]) {
          answer[st.peek()[1]] = i - st.pop()[1];
        }
        st.push(new int[] { temperatures[i], i });
      }
    }
    return answer;
  }
}