class Solution {
  public int carFleet(int target, int[] position, int[] speed) {
    List<int[]> cars = new ArrayList<>();
    for (int i = 0; i<position.length; i++){
      cars.add(new int[]{position[i], speed[i]});
    }
    Collections.sort(cars, (a, b) -> b[0] - a[0]);
    int fleets = 1;
    float time = (target-cars.get(0)[0])/cars.get(0)[1];
    for (int i = 1; i<cars.size(); i++){
      if (((float)(target-cars.get(i)[0]))/cars.get(i)[1]>time){
        fleets++;
        time = ((float)(target-cars.get(i)[0]))/cars.get(i)[1];
      }
    }
    return fleets;
  }
}