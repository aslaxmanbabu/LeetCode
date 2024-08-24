class Solution:
    def isPalindrome(self, x: int) -> bool:
        t = str(x)
        n = len(t)
        return self.helper(t, 0, n-1)
    
    def helper(self, t, left, right):
        if left >= right:
            return True
        
        if t[left] != t[right]:
            return False
        
        return self.helper(t, left+1, right-1)
        