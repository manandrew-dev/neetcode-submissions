class Solution {
  public List<List<String>> groupAnagrams(String[] strs) {
    Map<String, List<String>> ans = new HashMap<>();
    for (String str : strs){
      char[] strlist = str.toCharArray();
      Arrays.sort(strlist);
      String sortedstr = new String(strlist);
      if (ans.get(sortedstr)!=null){
        ans.get(sortedstr).add(str);
      }
      else{
        ans.put(sortedstr, new ArrayList<>(Arrays.asList(str)));
      }
    }
    return new ArrayList<>(ans.values());
  }
}