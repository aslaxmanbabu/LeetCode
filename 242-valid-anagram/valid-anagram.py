class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        r = {}
        for e in s:
            if e in r.keys():
                r[e] += 1
            else:
                r[e] = 1

        for e in t:
            if e in r.keys():
                r[e] -= 1
            else:
                return False
        
        if all(x == 0 for x in r.values()):
            return True
        else:
            return False
        