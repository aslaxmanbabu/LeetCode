class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        r = {}
        if len(s) != len(t):
            return False

        for i in range(len(t)):
            if s[i] in r.keys():
                if r[s[i]] != t[i]:
                    return False
            else:
                if t[i] in r.values():
                    return False
                r[s[i]] = t[i]

        return True
        