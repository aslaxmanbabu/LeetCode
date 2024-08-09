class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        n = len(nums)
        mul = 1
        
        def arr(n):
            mul = 1
            print(n)
            for i in n:
                if i != 0:
                    mul *= i
            
            return mul

        
        if 0 in nums:
            d = Counter(nums)
            if d[0] > 1:
                return [0] * n
            elif d[0] == 1:
                x = nums.index(0)
                temp = arr(nums[:x])
                if x < n-1:
                    temp *= arr(nums[x+1:])
                
                result = [0] * n
                result[x] = temp
                return result
        else:
            mul = arr(nums)
            result = []
            for i in nums:
                result.append(mul//i)
            
        return result


        

            
        