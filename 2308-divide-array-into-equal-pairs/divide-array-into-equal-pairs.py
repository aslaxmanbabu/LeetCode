class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        r = {}
        for n in nums:
            if n in r.keys():
                r[n] += 1
            else:
                r[n] = 1
        
        for x in r.keys():
            if r[x]%2 != 0:
                return False
        
        return True
        