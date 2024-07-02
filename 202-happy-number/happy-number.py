class Solution:
    def isHappy(self, n: int) -> bool:
        

        s = set()
        while n not in s:
            x = 0
            s.add(n)
            for i in str(n):
                i = int(i)
                x = x + i*i
            
            n = x
            if n == 1:
                return True
        return False

            
        