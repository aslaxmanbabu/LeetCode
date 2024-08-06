class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        
        if s == t or not s:
            return True
        
        if not t and s:
            return False
        k = 0
        ns = len(s)
        nt = len(t)

        for i in range(nt):
            if s[k] == t[i]:
                k += 1
            
            if k == ns:
                return True

        
        return False
        