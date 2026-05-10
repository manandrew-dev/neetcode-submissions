class Solution {
  public int maxArea(int[] heights) {
    int answer = 0;
    int i = 0;
    int j = heights.length - 1;
    int tmp = 0;
    while (i<j){
      if (heights[i]<heights[j]){
        tmp = heights[i]*(j-i);
        i++;
      }else{
        tmp = heights[j]*(j-i);
        j--;
      }

      if (tmp>answer){
        answer = tmp;
      }
    }
    return answer;
  }
}