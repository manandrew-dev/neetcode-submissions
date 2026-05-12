using namespace std;
class Solution {
 public:
  int evalRPN(vector<string>& tokens) {
    stack<int> st;
    int a;
    int b;
    string c;
    for (int i = 0; i<tokens.size(); i++){
      c = tokens[i];
      if (c=="+"){
        b = st.top();
        st.pop();
        a = st.top();
        st.pop();
        st.push(a+b);
      }else if (c=="-"){
        b = st.top();
        st.pop();
        a = st.top();
        st.pop();
        st.push(a-b);
      }else if (c=="*"){
        b = st.top();
        st.pop();
        a = st.top();
        st.pop();
        st.push(a*b);
      }else if (c=="/"){
        b = st.top();
        st.pop();
        a = st.top();
        st.pop();
        st.push((int) a/b);
      }else{
        st.push(stoi(c));
      }
    }
    return st.top();
  }
};