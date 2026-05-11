class Solution {
  public int trap(int[] height) {
    int i = 0;
    int j = height.length-1;
    int lmax = 0;
    int rmax = 0;
    int answer = 0;
    for (int k = 0; k<height.length; k++){
      if (lmax<=rmax){
        if (height[i]>lmax){
          lmax = height[i];
        }
        answer+=lmax-height[k];
        i++;
      }else{
        if (height[j]>rmax){
          rmax = height[j];
        }
        answer+=rmax-height[k];
        j--;
      }
    }
    return answer;
  }
}