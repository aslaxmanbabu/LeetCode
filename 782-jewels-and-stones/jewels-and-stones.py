class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        d = Counter(stones)
        count = 0
        for i in jewels:
            count += d[i]

        return count
        