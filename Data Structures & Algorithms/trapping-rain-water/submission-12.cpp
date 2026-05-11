class Solution {
 public:
  int trap(vector<int>& height) {
    int i = 0;
    int j = height.size()-1;
    int answer = 0;
    int lmax = 0;
    int rmax = 0;
    while (i<=j){
      if (lmax<=rmax){
        if (height[i]>lmax){
          lmax = height[i];
        }
        answer += lmax-height[i];
        i++;
      }else{
        if (height[j]>rmax){
          rmax = height[j];
        }
        answer += rmax - height[j];
        j--;
      }
    }
    return answer;
  }
};