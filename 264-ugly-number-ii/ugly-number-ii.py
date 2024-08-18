class Solution:
    def nthUglyNumber(self, n: int) -> int:
        l = [0] * n
        l[0] = 1
        a = b = c = 0
        for i in range(1, n):
            l[i] = min(l[a]*2, l[b]*3, l[c]*5)
            if l[i] == l[a]*2 : a += 1
            if l[i] == l[b]*3 : b += 1
            if l[i] == l[c]*5 : c += 1
        
        return l[n-1]