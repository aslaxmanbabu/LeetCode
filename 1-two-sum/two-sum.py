class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        for i, n in enumerate(nums):
            x = target-n
            if x in nums:
                if x == n:
                    if nums.count(n) >= 2:
                        result.append(i)
                        result.append(nums.index(x, i+1))
                        return result
                else:
                    result.append(i)
                    result.append(nums.index(x))
                    return result
        