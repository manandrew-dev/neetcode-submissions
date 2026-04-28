class Solution {
  public String encode(List<String> strs) {
    String ans = "";
    for (String s : strs) {
      ans = ans + s.length() + '#' + s;
    }
    return ans;
  }

  public List<String> decode(String str) {
    List<String> ans = new ArrayList<>();
    int i = 0;
    char[] chars = str.toCharArray();
    String word = "";
    boolean lenfound = false;
    String len = "";
    while (i < chars.length) {
      if (!lenfound) {
        if (chars[i] != '#') {
          len = len + chars[i];
          i++;
        }else{
          lenfound = true;
        }
      }else{
        for (int x = 0; x!=Integer.parseInt(len); x++){
          i++;
          word = word + chars[i];
        }
        ans.add(word);
        word = "";
        lenfound = false;
        len = "";
        i++;
      }  
    }
    return ans;
  }
}