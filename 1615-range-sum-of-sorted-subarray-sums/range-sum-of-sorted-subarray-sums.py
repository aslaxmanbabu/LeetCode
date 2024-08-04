class Solution:
    def rangeSum(self, nums: List[int], n: int, left: int, right: int) -> int:
        n = len(nums)
        result = []
        for i in range(n):
            temp = nums[i]
            result.append(temp)
            for j in range(i+1, n):
                temp += nums[j]
                result.append(temp)

        result.sort()
        mod = 10 ** 9 + 7
        return sum(result[left-1:right]) % mod
            