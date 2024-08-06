class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums)):
            if nums[i] > 0:
                break

        if i == 0:
            return nums[0]
        
        back = abs(nums[i-1])
        front = abs(nums[i])

        if back == front:
            return max(nums[i-1], nums[i])
        elif back > front:
            return nums[i]
        else:
            return nums[i-1]
