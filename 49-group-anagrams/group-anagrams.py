class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        r = {}
        for e in strs:
            x = ''
            x = ''.join(sorted(e))
            if x in r.keys():
                r[x].append(e)
            else:
                r[x] = []
                r[x].append(e)

        return r.values()
        