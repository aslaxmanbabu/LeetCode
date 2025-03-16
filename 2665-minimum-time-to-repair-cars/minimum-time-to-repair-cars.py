class Solution:
    def repairCars(self, ranks: List[int], cars: int) -> int:
        left, right = 1, max(ranks) * cars * cars

        def canRepairWithin(time):
            repaired_cars = 0
            for r in ranks:
                repaired_cars += int(math.sqrt(time//r))
                if repaired_cars >= cars:
                    return True
            return False

        while left < right:
            mid = (left + right) // 2
            if canRepairWithin(mid):
                right = mid
            else:
                left = mid + 1
        
        return left