class Solution {
 public:
  string encode(vector<string>& strs) {
    string ans = "";
    for (string s : strs){
      ans = ans+to_string(s.length())+"#"+s;
    }
    return ans;
  }

  vector<string> decode(string s) {
    vector<string> ans;
    string len = "";
    bool lenfound = false;
    string word = "";
    int i = 0;
    while (i<s.length()){
      if (!lenfound){
        if (s[i]!='#'){
          len = len + s[i];
          i++;
        }else {
          lenfound = true;
        }
      }else {
        for (int x = 0; x<stoi(len); x++){
          i++;
          word += s[i];
        }
        ans.push_back(word);
        len = "";
        word = "";
        lenfound = false;
        i++;
      }
    }
    return ans;
  }
};