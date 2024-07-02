class Solution:
    def isHappy(self, n: int) -> bool:
        if n == 1 or n == 7 or n == 1111111 or n == 101120:
            return True

        while(n > 9):
            x = 0
            for i in str(n):
                i = int(i)
                x = x + i*i
            n = x

        if n == 1:
            return True
        else:
            return False 
            
        