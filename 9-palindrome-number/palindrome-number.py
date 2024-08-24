class Solution:
    def isPalindrome(self, x: int) -> bool:
        n = len(str(x))
        temp = str(x)
        for i in range(n//2):
            if temp[i] != temp[n-1-i]:
                return False
        
        return True
        