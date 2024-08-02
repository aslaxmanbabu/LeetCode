class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        n = len(nums)
        k = sum(nums)
        if k == 0:
            return k
        elif k == n:
            return 0

        ext = nums + nums[:k-1]
        print(ext)
        curr = sum(1 for i in range(k) if ext[i] == 0)
        print(curr)
        minC = curr

        for i in range(1, n):
            if ext[i-1] == 0:
                curr -= 1
            if ext[i+k-1] == 0:
                curr += 1
            minC = min(minC, curr)

        return minC