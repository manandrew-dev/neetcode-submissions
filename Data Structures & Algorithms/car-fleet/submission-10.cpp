class Solution {
 public:
  int carFleet(int target, vector<int>& position, vector<int>& speed) {
    vector<pair<int, int>> cars;
    for (int i = 0; i<position.size(); i++){
      cars.push_back({position[i], speed[i]});
    }
    sort(cars.begin(), cars.end(), [](pair<int, int> a, pair<int, int> b){
      return a.first > b.first;
    });
    int fleet = 1;
    float time = ((float) target-cars[0].first)/cars[0].second;
    for (int i = 1; i<cars.size(); i++){
      if (((float) target-cars[i].first)/cars[i].second>time){
        fleet++;
        time = (((float) target-cars[i].first)/cars[i].second);
      }
    }
    return fleet;
  }
};