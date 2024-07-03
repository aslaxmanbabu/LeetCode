class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        r = {}
        for i, n in enumerate(nums):
            if n in r.keys():
                if abs(i - r[n]) <= k:
                    return True
            r[n] = i
        
        return False
        