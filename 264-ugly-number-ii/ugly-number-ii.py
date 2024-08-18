class Solution:
    def nthUglyNumber(self, n: int) -> int:
        primes = [2, 3, 5]
        ugly = [1]
        for _ in range(n):
            curr = heappop(ugly)
            for p in primes:
                new_ugly = curr * p
                if new_ugly not in ugly:
                    heappush(ugly, new_ugly)
        
        return curr