class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        cars = []
        for i in range(len(position)):
            cars.append((position[i], speed[i]))
        cars.sort(reverse=True)
        fleets = 1
        time = (target-cars[0][0])/cars[0][1]
        for i in range(len(cars)):
            if ((target-cars[i][0])/cars[i][1]>time):
                fleets += 1
                time = (target-cars[i][0])/cars[i][1]

        return fleets
            
 