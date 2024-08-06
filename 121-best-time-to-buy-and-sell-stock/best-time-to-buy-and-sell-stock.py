class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxP = 0
        minS = prices[0]
        n = len(prices)
        for i in range(1, n):
            maxP = max(maxP, prices[i]-minS)
            minS = min(minS, prices[i])

        return maxP    
        