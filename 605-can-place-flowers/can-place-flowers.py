class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 0
        k = len(flowerbed)
        if n == 0:
            return True
        for i in range(k):
            if flowerbed[i] == 0:
                back = (i == 0) or (flowerbed[i-1] == 0)
                front = (i == k-1) or (flowerbed[i+1] == 0)

                if (back and front):
                    flowerbed[i] = 1
                    n -= 1
                    if n <= 0:
                        return True
        

        return n <= 0