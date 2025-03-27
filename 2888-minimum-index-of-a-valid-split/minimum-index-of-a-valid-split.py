class Solution:
    def minimumIndex(self, nums: List[int]) -> int:
        index = []
        r = {}
        dominate = nums[0]
        dom_no = 1
        for x in nums:
            if x not in r.keys():
                r[x] = 1
            else:
                r[x] += 1
            
            if r[x] > dom_no:
                dominate = x
                dom_no = r[x]
        
        print(f"Dominate: {dominate}, Occur: {dom_no}")

        for i, j in enumerate(nums):
            if j == dominate:
                index.append(i)
        
        print(index)
        left_count = 0  
        right_count = dom_no
        for i in range(len(nums) - 1):
            if nums[i] == dominate:
                left_count += 1
                right_count -= 1 
            
            left_size = i + 1
            right_size = len(nums) - left_size
            
            if (left_count * 2 > left_size) and (right_count * 2 > right_size):
                return i

        return -1
        