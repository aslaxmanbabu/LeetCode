class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        rn = {}
        for i in range(len(ransomNote)):
            if ransomNote[i] not in rn.keys():
                rn[ransomNote[i]] = 1
            else:
                rn[ransomNote[i]] += 1

        for i in range(len(magazine)):
            if magazine[i] not in rn.keys():
                pass
            else:
                rn[magazine[i]] -= 1

        if all(x <= 0 for x in rn.values()):
            return True
        else:
            return False
        